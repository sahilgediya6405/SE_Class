// 18. Calculate person’s Annual salary

#include<stdio.h>

int main(){
	int salary,y_s;
	
	//user enter thir monthly salary 
	
	printf("\n Enter your monthly salary:");
	scanf("%d",&salary);
	
	// calcuate annual salary to get monthly salary from user
	
	y_s=salary*12;
	
	printf("\n Your annual salary is %d",y_s);
}