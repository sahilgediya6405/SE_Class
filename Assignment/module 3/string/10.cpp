//10.Write a program in C to extract a substring from a given string

#include<stdio.h>
#include<string.h>
int main(){
	char a[50],b[50];
	int position,length,l;
	
	printf("\n Enter the string : ");
	gets(a);
	
	printf("\n Enter position from whare you want a substring : ");
	scanf("%d",&position);
	printf("\n Enter length of substring : ");
	scanf("%d",&length);
	
	
	strncpy(b,a+(position-1),length);	
	printf(b);							
	
}
