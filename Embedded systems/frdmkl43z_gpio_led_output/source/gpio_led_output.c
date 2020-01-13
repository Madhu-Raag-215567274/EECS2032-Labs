
#include <stdio.h>
#include "board.h"
#include "peripherals.h"
#include "pin_mux.h"
#include "clock_config.h"
#include "MKL43Z4.h"
#include "fsl_debug_console.h"
/* TODO: insert other include files here. */
/* TODO: insert other definitions and declarations here. */
/*
 * @brief   Application entry point.
 */

void delayms(unsigned long msec){
  // write this function
    unsigned long i;
    while(msec > 0){
      i = 13333;                                  // this number means 1ms
      while(i > 0){
        i = i - 1;
      }
      msec = msec - 1;                    // decrements every 1 ms
    }
  }
int main(void) {
 /* Init board hardware. */
 BOARD_InitBootPins();
 BOARD_InitBootClocks();
 BOARD_InitBootPeripherals();
 /* Init FSL debug console. */
 BOARD_InitDebugConsole();
 PRINTF("Hello World\n");
 SIM->SCGC5 |= ((1 << 11) | (1 << 13) | (1 << 9) | (1 << 12));
 PORTA->PCR[4] = 0x103; //port A pin 4 GPIO(mux = 001) PS=PE=1 pull up resistor
 PORTD->PCR[5] = 0x100; //port D pin 5 GPIO (mux = 1) PS=PE=0 no pull up or down
 PTA->PDDR &= ~(0x10); // set bit 4 of port A to 0 (input)
 PTD->PDDR |= (1 << 5); // set bit 5 of port D to 1 (pin 5 is output)
 PORTC->PCR[3] = 0x103; //port C pin 3 GPIO(mux = 001) PS=PE=1 pull up resistor
 PORTE->PCR[31] = 0x100; //port E pin 31 GPIO (mux = 1) PS=PE=0 no pull up or down
 PTC->PDDR &= ~(0x08); // set bit 3 of port C to 0 (input)
 PTE->PDDR |= (1 << 31); // set bit 31 of port E to 1 (pin 31 is output)
 /* Force the counter to be placed into memory. */
 volatile static int i = 0;
 volatile static int j = 0;
 /* Enter an infinite loop, just incrementing a counter. */
 int flag = 0;
 while (1) {




  //delayms(500);
  i = PTA->PDIR & (1 << 4);
  j = PTC->PDIR & (1 << 3);
//  if (~i && ~j) { // If both switches are off; both LEDs are off.
//   PTD->PDOR = (1 << 5); // set LED1 off
//   PTE->PDOR = (1 << 31); // set LED2 off
//  } else if (i && ~j) { // If SW1 is off and SW2 is on, set LED2 on
//   PTE->PDOR = 0; // set LED2 ON
//  } else if (j && ~i) { // If SW2 is off and SW1 is on, set LED1 on
//   PTD->PDOR = 0; // set LED1 ON
//  } else {  // If SW1 and SW2 are on, set both LEDs on
//   PTE->PDOR = 0; // set LED2 ON
//   PTD->PDOR = 0; // set LED1 ON
//  }
// }
// return 0;
  if(i&&j){
   PTD->PDOR=(1<<5);
   PTE->PDOR=(1<<31);
  } else if(i && !j){
   PTD->PDOR=(1<<5);
   PTE->PDOR=0;
   flag = 2;
  } else if(!i && j){
   PTE->PDOR=(1<<31);
   PTD->PDOR=0;
   flag = 1;
  }
  if((!i && !j) && (flag == 1)){
   PTE->PDOR=(1<<31);
     PTD->PDOR=0;
     delayms(250);
     PTD->PDOR=(1<<5);
     delayms(250);
  }
  if((!i && !j) && (flag == 2)){

   PTD->PDOR=(1<<5);
   PTE->PDOR=0;
   delayms(250);
   PTE->PDOR=(1<<31);
   delayms(250);
  }
 }
 return 0;
}
