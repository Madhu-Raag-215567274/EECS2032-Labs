#include <stdio.h>
#include <stdlib.h>
int main(){

    // creating a FILE variable

    FILE *fp1, *fp2;

    // creating a character variable

    char ch;

    // open the file in read mode

    fp2 = fopen("lab61.txt", "r");

    fp1 = fopen("lab61out.txt", "w");
    
    
   if(fp2==NULL){
	
		exit(0);
	}

    // display the content of the file
    
    

    while ((ch = getc(fp2)) != EOF)

    {     
    

        if (ch == '\n')

        {

            fprintf(fp1, "16");

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