// 33. C Program to Read Integer and Print First Three Powers (N^1, N^2, N^3)

#include<stdio.h>

int main(){
	int A;
	
	printf("\n Enetr 1st number:");
	scanf("%d",&A);
	
	printf("\n %d 1st power is %d",A,A);
	printf("\n %d 2nd power is %d",A,A*A);
	printf("\n %d 3rd power is %d",A,A*A*A);
	
	return 0;
	
	
}