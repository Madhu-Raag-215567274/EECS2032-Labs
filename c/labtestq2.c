#include <stdio.h>

#include <stdlib.h>


 main(){
 	
 char file[100];
 printf("Enter file name:");
 	scanf("%s",file);
 	FILE *fp,*fp2;
 	fp =fopen(file,"r");
	fp2 =fopen("kkk.txt","w");//check only
 	if(fp==NULL) {printf("Error opening\n");exit(0);}
 	int i =1;
 	char ch[100];
 	char ch2[100];
 	char ch3[100];
char ch4[100];
int a=0; 	
int numa=0;
int numb=0;
int numc=0;
int numd=0;
 	while(!(feof(fp))){ 		
 		if(i>3){		
 		ch[0]=file[10];
 		ch[1]=file[11];
 		ch[2]=file[12];
 		numa=numa+atoi(ch);
 		////b
 		ch2[0]=file[14];
 		ch2[1]=file[15];
 		ch2[2]=file[16];
 		numb=numb+atoi(ch2);
 		///c
 		ch3[0]=file[18];
 		ch3[1]=file[19];
 		ch3[2]=file[20];
 		numc=numc+atoi(ch3);
 		/// d
 		
 			ch4[0]=file[22];
 		ch4[1]=file[23];
 		ch4[2]=file[24];
 		numd=numd+atoi(ch4);
 	
 		
 	 	

 	}
 	
 	fgets(file,100,fp);
 	fputs(file,fp2); ///just to check
 	i++;
 }

 if((numa>numb) && (numa>numc) && (numa>numd)){
 printf("A is the winnner\n");
 
 }
 else if((numb>numa) && (numb>numc) && (numb>numd)) {
 printf("B is the winnner\n");
 }
 else if((numc>numa) && (numc>numb) && (numc>numd)) {
 printf("C is the winnner\n");
 }
 else {
 printf("D is the winnner\n");
 }
 	 //LT1A2.txt 


fclose(fp);

}
