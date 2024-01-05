// 7. Accept marks from user and check pass or fail

#include<stdio.h>
int main(){
	int M;
	
	printf("Enter your mark:");
	scanf("%d",&M);
	
	if(M<35)
	{
		printf("You are fail!");
	}else{
		printf("Congretulation You are pass.");
	}
	return 0;
}