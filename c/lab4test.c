#include <stdio.h>


main(){
 float fact1=0;
 float fact2=0;
 
 printf("Enter n:");
 scanf("%f",&fact1);
 int tmp =fact1;
printf("Enter r:");
 scanf("%f",&fact2);
  int tmp2 =fact2;
  int tmp3=fact1-fact2;
  float fact3 =fact1-fact2;
 
 /// fact 1
 int i;
 for(i=1; i<tmp;i++){	
 fact1=fact1*(tmp-i);
 	
 
 	}
 	
 	/// Fact2
 	 int j;
 for(j=1; j<tmp2;j++){	
 fact2=fact2*(tmp2-j); 	
 
 	}
 	
 	///n-k
 	
 	 int k;
 for(k=1; k<tmp3;k++){	
 fact3=fact3*(tmp3-k); 	
 
 	}	
 	
 	
 float result = fact1/(fact2*fact3);
 printf("%f\n",result);
 	
 	
 	
 	
 	
 	
	
	
	
	
}