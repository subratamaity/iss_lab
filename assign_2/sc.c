#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

int main(){

	// char **Matrix,**z;
	int ROW,COLUMN;
	// char z[COLUMN][ROW];
	int i,j,k=0,b;
	char a[100];
	printf("the plain text is:");
	fgets(a,100,stdin);
	printf("enter the key value:");
	scanf("%d",&ROW);
	b=strlen(a);
	printf("%d\n",b);
	COLUMN=b/ROW;
	printf("%d\n",COLUMN);
	printf("%d\n",ROW);
	Matrix = (char **)calloc(ROW, sizeof(char *));
	for(i = 0; i < ROW; i++){
			Matrix[i] = (char *)calloc(COLUMN, sizeof(char));
	 }
	// z = (char **)calloc(COLUMN, sizeof(char *));
	// for(i = 0; i < COLUMN; i++){
	// 		z[i] = (char *)calloc(ROW, sizeof(char));
	// }
	for(i=0;i<COLUMN;i++){
		for(j=0;j<ROW;j++){
			Matrix[j][i]=a[k++];
		}
	}	
	for(i=0;i<ROW;i++){
		for(j=0;j<COLUMN;j++){
			printf("%c ",Matrix[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	// for(i=0;i<ROW;i++){
	// 	for(j=0;j<COLUMN;j++){
	// 		z[j][i]=Matrix[i][j];
	// 	}
	// }

	// for(i=0;i<ROW;i++){
	// 	for(j=0;j<COLUMN;j++){
	// 		printf("%c ",z[i][j]);
	// 	}
	// 	printf("\n");
	// }
	for(i=0;i<COLUMN;i++){
		for(j=0;j<ROW;j++){
			printf("%c ",Matrix[j][i]);
		}
	}	
	return 0;


	// for(i=0;i<COLUMN;i++){
	// 	for(j=0;j<ROW;j++){
	// 		printf("%c ",Matrix[i][j]);
	// 	}
	// }



}





