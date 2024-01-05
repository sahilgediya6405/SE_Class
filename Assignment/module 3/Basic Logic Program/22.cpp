/* 22. Calculate compound interest (Compound Interest formula:
a. Formula to calculate compound interest annually is given by:
Amount= P(1 + R/100)t
b. Compound Interest = Amount – P */

#include<stdio.h>
int main(){
	int salary;
	float A,I_P,L_I;
	
	//to get selery from user
	
	printf("\n Enter your salary:");
	scanf("%d",&salary);
	
	//less 10%  insurance preminm in user salary
	
	I_P=salary*10/100;
	printf("\n Your insurance premium is %f",I_P );
	
	//print selery less insurance premium
	
	A=salary-I_P;
	printf("\n less insurance premium in your salary than your salary is %f",A);
	
	//less 10% loan installment after less insurance premium 
	
	L_I=A*10/100;
	printf("\n your  loan installment is %f",L_I);
	
	//print selery less insurance preminm and loan installment
	
	printf("\n less I_P & L_I in your salary. Then your salary is %f",salary-I_P-L_I);
	
	return 0;
}
