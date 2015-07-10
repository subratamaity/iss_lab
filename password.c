#include <stdio.h>
#include <string.h>
#include <unistd.h>
 #include <ctype.h>

int main(){
	int u=0,l=0,d=0,s=0,sum=0;
	char *a;
	int b;
	int i=0; 

	a=getpass("enter a password with uppercase,lowercase,decimal digits,special character\n");
	printf("%s\n",a);
	b=strlen(a);
	printf("%d\n",b);
	if(b<6)
		printf("password is too short");
	
	while(i<=b){
		

		if(isupper(a[i]))
			u=1;
			
	
		if(islower(a[i]))
			l=1;

		if(isdigit(a[i]))
			d=1;

		if(ispunct(a[i]))
			s=1;
		i++;

	}
	sum=u+l+d+s;
	switch(sum){
		case 1:
			printf("password is weak\n");
			break;
		case 2:
			printf("password is modarate\n");
			break;
		case 3:	
			printf("password is strong\n");
			break;
		case 4:
			printf("password is very strong\n");
			break;
	}
	return 0;

}




