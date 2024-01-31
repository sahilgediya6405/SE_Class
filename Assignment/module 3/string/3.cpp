//3. Write a program in C to print individual characters of a string in reverse order

#include<stdio.h>
int main(){
	char a[50];
	int i,count=0;
	
	printf("\n Enter the string :");
	gets(a);
	
	printf("\n characters individual in reverse order :");
	for(i=0;a[i]!='\0';i++){
		count++;
	}
	for(i=count-1;i>=0;i--){
		printf(" %c ",a[i]);
	}
}
