/* 23. WAP to calculate swap 2 numbers with using of multiplication and
division.*/


#include<stdio.h>
int main(){
	int a,b;
	
	printf("\n Enter  a=");
	scanf("%d",&a);
	
	printf("\n Enter  b=");
	scanf("%d",&b);
	
	// printf brfoure swaping 
	
	printf("\n value befoure swaping a=%d.",a);
	printf("\n value befoure swaping b=%d.",b);
	
	//swap value using of multiplication 
	
	a=a*b;
	b=a/b;
	a=a/b;
	
	// print value after swaping
	
	printf("\n value after swaping a=%d.",a);
	printf("\n value after swaping b=%d.",b);
	

}