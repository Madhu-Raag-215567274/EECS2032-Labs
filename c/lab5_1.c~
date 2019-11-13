#include <stdio.h>
#include <string.h>

int main(){
int len,i,max=0,counter=0;
char string[100];
printf("Enter the string of 1's and 0's:\n");
scanf("%s",string);
len=strlen(string);
for(i=0;i<len;i++){
	if(string[i]=='0'){
	  if(counter>max)
			max=counter;
			counter=0;
 }

else if(string[i]=='1'){
counter+=1;
}
else{
	printf("invalid string\n");
	return 0;
 }
}
if(counter>max){
max=counter;
 printf("The maximum run is %d\n",max);
return 0;
}
else {
	printf("The maximum run is %d\n",max);
	return 0;
}

}