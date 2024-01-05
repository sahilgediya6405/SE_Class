// 3. WAP to check if the given year is a leap year or not.

#include<stdio.h>
int main(){
	int Year,a;
	
	printf("\n Enter any Year:");
	scanf("%d",&Year);
	
	a=Year%4; 
	
	if(a==0){
		printf("\n %d Year is leap year",Year);
	}else{
		printf("\n %d Year is not leap year",Year);
	}
	
	return 0;
}