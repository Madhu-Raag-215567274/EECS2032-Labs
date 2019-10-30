#include <stdio.h>
#include <stdlib.h>

int main(){
	int i;
	i=0;	
	char arr[]="aaaaa";
	char key[100];
	printf("Please enter the key : ");
	
   scanf ("%[^\n]s", key);

	while( i<5 && key[i]!='\0'){
		arr[i]=key[i];
		i++;
	}	
	FILE *fdr,*fdw;
	char ch;
	
	fdr=fopen("lab62.txt","r");
	fdw=fopen("lab62enc.txt","w");
	
	if(fdr==NULL){
		
		exit(0);
	}
	
	int y=0;
	ch=fgetc(fdr);
	char exor;
	
	while(ch!=EOF){
		
		if(y==5){
			y=0;
			}
		exor =arr[y] ^ ch;
		
		
		fprintf(fdw,"%c",exor);

		ch=fgetc(fdr);
		y++;		
		
	}
	fclose(fdw);
	fclose(fdr);
	return 0;
  
}