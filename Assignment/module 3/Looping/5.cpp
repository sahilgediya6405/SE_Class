//5. WAP to print factorial of given number

#include<stdio.h>
int main(){
	int i,n,a=1;
	
	printf("Enetr number of factorial:");
	scanf("%d",&n);
	
	for(i=n;i>=1;i--){
		a=a*i;
	}
	printf("Factorial is %d",a);
}