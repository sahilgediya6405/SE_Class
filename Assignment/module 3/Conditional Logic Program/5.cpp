//5. Check Number Is Positive or Negative

#include<stdio.h>
int main(){
	int X;
	
	printf("Enter number:");
	scanf("%d",&X);
	
	
	if(X<0){
		printf("%d is nagativ",X);
	}else if(X>0){
		printf("%d is positive",X);
	}else{
		printf("%d is  neither positive nor negative",X);
	}
	
	return 0;
}