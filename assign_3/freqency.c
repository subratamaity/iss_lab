#include <stdio.h>

int main(){

    char x;
    int y,y1,i;
    int arr[26]={0};
    int arr1[26]={0};
    FILE *fp;
    fp = fopen ("emp.txt", "r"); 
    while ((x=getc(fp))!= EOF)
    {
        printf("%c--",x);
        y=x- 'a';
        printf("%d--",y);
        ++arr[y];
        y1=(y+7)%26;
        ++arr1[y1];
        printf("%c --",y1 +'a');
        printf("%d \n",y1);   
    }
    for(i=0;i<=25;i++){
      printf(" %c %d \n",i+'a',arr[i]);
    }
    printf("\n");
    for(i=0;i<=25;i++){
      printf("%c %d\n",i+'a',arr1[i]);
    }
    fclose(fp);
    return 0;
   } 






















