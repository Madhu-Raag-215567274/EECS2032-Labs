#include <stdio.h>
#include <stdlib.h>
main(){
	char key[]= "aaaaa";
	char inp[100];
	printf("Enter 5 character key: ");
	scanf("%[^\n]s",inp);
	int i;
	
while( i<5 && inp[i]!='\0'){
		key[i]=inp[i];
		i++;
	}	
	
	
	FILE *fp1,*fp2;
	char ch;
	fp1=fopen("lab62.txt","r");
	fp2=fopen("lab62enc.txt","w");
	if(fp1==NULL) {exit(0);}
	int y;
	char exnor;
	while((ch=fgetc(fp1)) != EOF) {
		
		if(y==5){
			y=0;
		}
		exnor = key[y]^ch;
	//	fprintf(fp2,"%c",exnor);
		putc(exnor,fp2);
	
	
	}
	fclose(fp1);
	fclose(fp2);

	



}