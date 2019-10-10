#include<stdio.h>

main() {
	float num,r,nr;
	float fact1=1;
	float fact2=1;
	float fact3=1;
	printf("Enter integer n:");
	scanf("%f",&num);
	printf("Enter integer r: ");
	scanf("%f",&r);
	int i;
	for (i =1; i<= num; i++) {
	fact1=fact1*i;
	//n! 
	}
int j;

for(j =1;j<=r;j++) {	
	fact2=fact2*j;
	
}
int k;
for(k =1;k<= (num-r);k++) {	
	fact3=fact3*k;
	
}

nr=fact1/(fact2*fact3);
printf("n choose r: %f\n",nr);
}

