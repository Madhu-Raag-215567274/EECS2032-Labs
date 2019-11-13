#include <stdio.h>

int main(){
unsigned long long int num;
printf("Enter an integer: ");
scanf("%llu",&num);

if(num == 0){
	printf("Reverse of %llu is: ",num);
	printf("%llu",num);
}
	
else {
		printf("Reverse of %llu is: ",num);
	}

	

while(num!=0){
printf("%llu\n",num%10);
num=num/10;
}
printf("\n");
return 0;
}
