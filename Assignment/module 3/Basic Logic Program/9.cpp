// 9. Find circumference of Triangle formula : triangle = a + b + c

#include<stdio.h>

int main(){
	
	int triangle,A,B,C;
	
	printf("Enter A side of triangle:");
	scanf("%d",&A);
	
	printf("Enter B side of triangle:");
	scanf("%d",&B);
	
	printf("Enetr C side of triangle:");
	scanf("%d",&C);
	
	//circumference of Triangle
	
	triangle=A+B+C;
	
	printf("circumference of Triangle is %d",triangle);
}