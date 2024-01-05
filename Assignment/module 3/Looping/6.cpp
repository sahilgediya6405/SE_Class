//6. WAP to print Fibonacci series up to given numbers

#include<stdio.h>
int main(){
	int i,n,a=0,b=1,c;
	
	printf("Enetr number of factorial:");
	scanf("%d",&n);
	
	printf("\n \t %d",a);
	printf(" \t %d",b);
	
for(i=0;i<=n;i++){
	c=a+b;
	printf("\t %d",c);
	a=b;
	b=c;
	c=a;
}
}