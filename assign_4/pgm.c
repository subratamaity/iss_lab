#include <stdio.h>

int main()
{             

    FILE *fp;	
    	
     char ch;
    fp=fopen("LenaASCII.pgm","r");

    if(fp==NULL)
    {
        printf("Some problem in opening the file");
        // exit(0);
    } 
    else
    { 
        while( ( ch=fgetc(fp) ) !=EOF )
        {
            printf("%c",ch);
        }
    }

    fclose(fp);

    return 0;  
}
