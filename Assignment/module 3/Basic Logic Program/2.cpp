/* 2. Write a program to make Simple calculator (to make addition,
    subtraction,multiplication, division and modulo)*/

#include<stdio.h>

int main(){ 
	
	int a,b,c,d,e,f,g;
	
	
	printf("\n Enetr value of  a:");
	scanf("%d",&a);
	
	printf("\n Enetr value of b:");
	scanf("%d",&b);
	
	// Addition
	
	c=a+b;
	
	printf("The sum of %d + %d = %d \n",a,b,c);
	
	// subtraction
	
	d=a-b;
	
	printf("The subtraction of %d - %d = %d \n",a,b,d);
	
	// multiplication
	
	e=a*b;
	
	printf("The multiplication of %d * %d = %d \n",a,b,e);
	
	// division
	
	f=a/b;
	
	printf("The division of %d / %d = %d \n",a,b,f);
	
	//modulo
	
	g=a%b;
	
	printf("The modulo of %d and %d = %d \n",a,b,g);

			return 0;		
}