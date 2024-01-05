// 27.Convert days into months

#include<stdio.h>

int main(){
	int Day;
	double month;
	
	printf("\n Enter Day:");
	scanf("%d",&Day);
	
	month=Day/30.44;
	
	printf("\n %d day to convert Month that month is %2f",Day,month);
	
	return 0;


}