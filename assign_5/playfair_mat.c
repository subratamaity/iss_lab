#include <stdio.h>
#include <string.h>
int main(){
int i,l,j,k,a;
char key[50]={0};
char matrix[5][5]={{0}};
char *p;
p=(char*)matrix;
int str[26]={0};
printf("enter the key text \n");
scanf("%s",key);
l=strlen(key);
for(k=0;k<l;k++){
a=key[k]-'a';
if(str[a] < 1 && key[k] != 'i' ){
++str[a];
*p=key[k];
p++;
}
}
for(i=0;i<26;i++){
if(str[i]!=1 && i != 'i' -'a'){
*p=i + 'a';
p++;
}
}
for(i=0;i<5;i++){
for(j=0;j<5;j++){
printf("%c ",matrix[i][j]);
}
printf("\n");
}
}