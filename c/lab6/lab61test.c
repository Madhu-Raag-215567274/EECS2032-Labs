#include <stdio.h>
#include <stdlib.h>


main(){

char ch;
FILE *fp,*fp1;
fp=fopen("lab61.txt","r");
fp1=fopen("lab61out.txt","w");



if(fp==NULL){
	
	
	exit(0);
	}

while((ch=getc(fp))!=EOF) {
	
	
	if(ch =='\n')
	{
		fprintf(fp1,"16");
 				//putc('1',fp1);
            //putc('6',fp1);


		
  }
  else {
  	putc(ch,fp1); 
  
  
  }

}

fclose(fp);
fclose(fp1);
return 0;
}