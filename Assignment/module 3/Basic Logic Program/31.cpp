//31.. Convert kilometers into meters

#include<stdio.h>

int main(){
	float kilometers,meters;
	
	printf("\n Enter kilometer :");
	scanf("%f",&kilometers);
	
	meters=1000*kilometers;
	
	printf("\n Meters is %f",meters);
	
	return 0;
}