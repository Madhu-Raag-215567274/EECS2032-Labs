#include <stdio.h>
#include <stdlib.h>
int main(){

    

    FILE *fp1, *fp2;

    

    char ch;

  

    fp2 = fopen("lab61.txt", "r");

    fp1 = fopen("lab61out.txt", "w");
    
    
   if(fp2==NULL){
	
		exit(0);
	}

        
    

    while ((ch = getc(fp2)) != EOF)

    {     
    

        if (ch == '\n')

        {

            (fp1, "16");
           
        }

        else

        {

            putc(ch, fp1);

        }

    }

    fclose(fp2);

    fclose(fp1);

    return 0;
}