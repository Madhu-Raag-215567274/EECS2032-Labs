#include <stdio.h>
#include <string.h>

main(){
	
	
	char string[100];
	printf("Enter string:");
	scanf("%[^\n]s",string);
	int i;
	int counter=0;
	for(i=0;i<strlen(string);i++) {
		if(string[i]=='Z' && string[i+1]=='Z') {
			break;	
	}
	else {
	counter++;
    }
   }
   printf("%d\n",counter);
}
