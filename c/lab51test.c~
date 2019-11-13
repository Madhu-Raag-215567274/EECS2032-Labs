#include <stdio.h>
#include <string.h>

main(){
char s[100];
printf("Enter strings 1's and 0's only: ");
scanf("%s",s);
int i;
int max=0;
int max2=0;
int counter=1; 
for(i=0;s[i]!='\0';i++){
	if(s[i]=='1'){
	 max=max+1;
	 
	}
	else if(s[i]=='0') {
		if(max >= max2) {
			counter=0;
			max2=max;
			max=0;
		}
		else{
			max=0;
		}
}
else {
counter=2;
break;
}
}


 
 if(counter==2){
 	printf("INvaild input\n");
 }
 
 else if(max>=max2){
 	 printf("%d\n",max);
 }
 else {
 	printf("%d\n",max2);
 }
 
}