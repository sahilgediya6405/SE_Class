//2. Write a program in C to separate individual characters from a string.


#include<stdio.h>
int main(){
	char a[50];
	int i,count=0;
	
	printf("\n Enter the string : ");
	gets(a);
	printf("\n individual characters :",count);
	for(i=0;a[i]!='\0';i++){
		printf(" %c ",a[i]);
		count++;
	}

}
