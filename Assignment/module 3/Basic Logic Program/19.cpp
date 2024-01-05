// 19.Calculate compound interest

#include<stdio.h>
#include<math.h>
int main(){
	
	float a,r,t,CI;
	int p;                                  
	
	printf("\n Enter your principal amount:");
	scanf("%d",&p);
	
	printf("\n Enter the annual interest rate :");
	scanf("%f",&r);
	
	printf("\n enter the time the money is invested for in year:");
	scanf("%f",&t);
	
	a=p*pow((1+r/100),t);
	CI=a-p;
	
	printf("\n Compound interest is %f",CI);
	printf("\n Total amount is %f",a);
	
	return 0;
	
}