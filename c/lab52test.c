#include <stdio.h>


main(){
	
	
 int ch;
printf("Enter Integer:");
scanf("%d",&ch);

while(ch!=0) {
	printf("%d",ch%10);
	ch=ch/10;
}
printf("\n");
	
}