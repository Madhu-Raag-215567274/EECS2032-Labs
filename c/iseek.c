#include <stdio.h>

#include <sys/types.h>

#include <unistd.h>

main() {

FILE *fp;
char ch[100];


int c='A';

fp=fopen("tteesstt.txt","r+"); if(fp==NULL) printf("Error opening\n");

lseek(fileno(fp), 29 ,SEEK_CUR) ;
ch=fgetc(fp);
printf("%c",ch);
//fputc(c, fp);

fclose(fp);



}