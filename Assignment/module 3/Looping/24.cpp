// 24. 1 + 2 + 3 + 4 + 5 + ... + n

#include<stdio.h>
int main(){
	int i,n,b=1;
	
	printf("Enter number:");
	scanf("%d",&n);
	
	printf("%d",b);
	
	for(i=2;i<=n;i++){
		printf("+%d",i);
	}
}