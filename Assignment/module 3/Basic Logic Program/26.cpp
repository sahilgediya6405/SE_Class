// 26. 26.Convert temperature Fahrenheit to Celsius

#include<stdio.h>

int main(){
	
	float f,c;
	
	printf("\n Enter Fahrenheit :");
	scanf("%f",&f);
	
	c=(f-32)*5/9;
	
	printf("\n celsium is %f",c);
	
}