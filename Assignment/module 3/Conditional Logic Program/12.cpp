/* 12.WAP to find maximum number among 3 numbers using ternary
operator */

#include<stdio.h>
int main(){
	int a,b,c;
	
	printf("Enter first number:");
	scanf("%d",&a);
	
	printf("Enter second number:");
	scanf("%d",&b);
	
	printf("Enter third number:");
	scanf("%d",&c);
	
	
//(a>b) && (a>c) ? (b>c) ?
(a>b) ? ((a>c) ? a:c) : ((b>c) ? b:c) ? printf("a is max"):printf("b is max")?printf("c is max"): 

