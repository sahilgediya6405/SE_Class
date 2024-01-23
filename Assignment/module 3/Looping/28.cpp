// 28. 1 2 3 6 9 18 27 54...

#include<stdio.h>

int main(){
	int i,n,a=1,b=2,c;
	
	printf("Enetr your number:");
	scanf("%d",&n);
	
	printf("%d",a);
	printf("\t %d",b);

	for(i=3;i<=n;i++){
		c=a+b;
		printf("\t %d",c);
		a=b;
		b=c;

	}	
}
