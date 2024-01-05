//16. Convert country’s name in abbreviate form

#include<stdio.h>

int main(){
	
	char x[15],y[15],z[15];
	
	printf("\n Enter Contry name: ");
	
	scanf(" %s %s %S",&x,&y,&z);
	
	printf(" %c %c %C", x[0],y[0],z[0]);
}