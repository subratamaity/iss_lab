#include <stdio.h>

int main()
{             

    FILE *fp;	
     FILE *fp1;	
     char ch;
     char a[];
     char *b,size[50];
    fp=fopen("LenaASCII.pgm","r");
    fp=fopen("1.txt","w");


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

    fscanf(fp,"%s \n",a);
    fprintf(fp1,"%s \n",a);
    getline(&b,&size,fp);
    fprintf(fp1,"%s \n",)
    fclose(fp);
    fclose(fp1);
	return 0;  
}
