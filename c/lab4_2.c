#include <stdio.h>
int main(){
int n,i,j;
int counter=0;
printf("enter value of n: ");
scanf("%d",&n);
int arr[n];

printf("Enter %d element\n",n);
for(i=0;i<n;i++){
scanf("%d",&arr[i]);
}

   for(i=0;i<n;i++){
           for(j=1+i;j<n;j++){
            if(arr[i]==arr[j]){
             printf("YES\n");
                counter=1;
                 break;
              }
            }
}
   if(!counter)
    printf("NO\n");
       
}

