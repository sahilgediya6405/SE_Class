// 25.Accept 5 expense from user and find average of expense

#include<stdio.h>
int main(){
	float E1,E2,E3,E4,E5,A;
	
	printf("\n Enetr your 5 expense:");
	printf("\n 1.");
	scanf("%f",&E1);
	printf("\n 2.");
	scanf("%f",&E2);
	printf("\n 3.");
	scanf("%f",&E3);
	printf("\n 4.");
	scanf("%f",&E4);
	printf("\n 5.");
	scanf("%f",&E5);
	
	A=E1+E2+E3+E4+E5/5;
	
	printf("\n Average of 5 expense is %f",A);
}