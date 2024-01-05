//18. Write a C program to calculate profit and loss on a transaction

#include<stdio.h>
int main(){
	float Selling_p,Cost_p;
	
	printf("Enetr Selling price:");
	scanf("%f",&Selling_p);
	
	printf("Enter cost price:");
	scanf("%f",&Cost_p);
	
	if(Selling_p > Cost_p){
		printf("%f is your profit.",Selling_p - Cost_p);
	}else if (Cost_p > Selling_p){
		printf("your loss is %f. ",Cost_p - Selling_p);
	}else{
		printf("===NO Profit and No Loss===");
	}		
}