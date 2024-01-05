/*
14.Accept 5 numbers from user and find those numbers factorials
*/

#include<stdio.h>
int main(){
	int a,i,fact=1;
	
	printf("enter your number:")
	scanf("%d",&a);
	
	for(i=a;i>=1;i--){
		fact=fact*i;
		
	}
	printf("\n factorial is %d",fact);
}