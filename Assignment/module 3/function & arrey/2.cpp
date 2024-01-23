/* 2.WAP of Addition, Subtraction, Multiplication and Division using
Switchcase.(Must Be Menu Driven) */

#include<stdio.h>
void sum();

int main(){
	sum();	
}
void sum(){
	
	int a,b,ch;
	float sum;
	
	printf("\n Enter Your first number:");
	scanf("%d",&a);
	
	printf("\n Enter your number:");
	scanf("%d",&b);
	
	printf("\n ========= Choice any one ==========");
	printf("\n 1.Addition \n 2.Subtraction \n 3.Multiplication \n 4.Division");
	scanf("%d",&ch);
	
	
	
	switch(ch){
		
		case 1:
			sum=a+b;
			printf("\n Addition of %d and %d is %f",a,b,sum);
			break;
			
		case 2:
			sum=a-b;
			printf("\n Subtration of %d and %d is %f ",a,b,sum);
			break;
			
		case 3:
			sum=a*b;
			printf("\n Multiplication of %d and %d is %f",a,b,sum);
			break;
			
		case 4:
			sum=a/b;
			printf("\n Division of %d and %d is %f",a,b,sum);
			break;
			
		default:
			printf("\n !!WRONG CHOICE!!");
			break;
	}
}