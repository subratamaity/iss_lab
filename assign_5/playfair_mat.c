#include <stdio.h>
#include <string.h>
int main(){
	int i,l,j;
	int k=0;
	char key[50]={0};
	printf("enter the key text \n");
	scanf("%s",key);
	char str[26]={0};
	// scanf("%s",str);
	l=strlen(key);
	char matrix[5][5]={{0}};
	for(i=0;i<4;i++){
  		for(j=0;j<4;j++){
  			if(k<l)
  			matrix[i][j]=key[k++];
  			
 		} 
	}
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			printf("%c ",matrix[i][j]);
		}

	}

}
