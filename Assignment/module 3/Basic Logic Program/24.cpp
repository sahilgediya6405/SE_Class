/*24.Accept 5 employees name and salary and count average and total
salary */


#include<stdio.h>

int main(){
	char emp1,emp2,emp3,emp4,emp5;
	float s1,s2,s3,s4,s5,T_S;
	
	printf("Enetr 1st employ name:");
	scanf(" %s",&emp1);
	
	printf("Enetr 1st employ salary:");
	scanf("%f",&s1);
	
	printf("Enter 2nd employ name:");
	scanf(" %s",&emp2);
	
	printf("Enter 2nd employ salary:");
	scanf("%f",&s2);
	
	printf("Enter 3rd employ name:");
	scanf(" %s",&emp3);
	
	printf("Enter 3rd employ salary:");
	scanf("%f",&s3);
	
	printf("Enter 4th employ name:");
	scanf(" %s",&emp4);
	
	printf("Enter 4th employ salary:");
	scanf("%f",&s4);
	
	printf("Enter 5th employ name:");
	scanf(" %s",&emp5);
	
	printf("Enter 5th employ salary:");
	scanf("%f",&s5);
	
	printf("\n 1st employ name is %s", emp1);
	printf("\n 1st employ salary is %f",s1);
	
	printf("\n 2nd employ name is %s", emp2);
	printf("\n 2nd employ salary is %f",s2);
	
	printf("\n 3rd employ name is %s", emp3);
	printf("\n 3rd employ salary is %f",s3);
	
	printf("\n 4th employ name is %s", emp4);
	printf("\n 4th employ salary is %f",s4);
	
	printf("\n 5th employ name is %s", emp5);
	printf("\n 5th employ salary is %f",s5);
	
	
	T_S=s1+s2+s3+s4+s5;
	
	printf("\n Total is %f",T_S);
	
	printf("\n average salary is %f",T_S/5);
	
	
	
	
	
}