// 7. Write a program in C to copy one string to another string.

#include<stdio.h>
int main(){
	char a[30],b[30];
	int i;
	printf("\n Enter the string : ");
	gets(a);
	
	for(i=0;a[i]!='\0';i++){
		b[i]=a[i];
	}
	printf("\n %s",b);
	printf("\n string a is copied to string b");
}
