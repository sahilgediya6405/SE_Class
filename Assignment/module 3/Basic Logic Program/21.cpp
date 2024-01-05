/* 21. Accept 2 numbers from user and swap 2 numbers with using 3rd variable
and without using 3rd variable */

#include<stdio.h>
int main(){
	int a,b,c;
	
	printf("\n Enter  a=");
	scanf("%d",&a);
	
	printf("\n Enter  b=");
	scanf("%d",&b);
	
	// print value befoure swaping
	
	printf("\n value befoure swaping a=%d.",a);
	printf("\n value befoure swaping b=%d.",b);
	
	//swap value using 3rd variable
	
	c=a;
	a=b;
	b=c;
	
	// print value after swaping
	
	printf("\n value after swaping a=%d.",a);
	printf("\n value after swaping b=%d.",b);
	
	// Swap value without using 3rd varible
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	// print swap value without using 3rd varible
	
	printf("\n swap value without using 3rd varible a=%d.",a);
	printf("\n swap value without using 3rd varible b=%d.",b);

}