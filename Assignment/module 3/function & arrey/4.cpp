//4. WAP to find factorial using recursion

#include<stdio.h>
int fact(int);

int main(){
	int x,n;
	
	printf("\n enter your number");
	scanf("%d",&n);
	
	x=fact(n);
	printf("\n factoriyal is = %d",x);
	
	return 0;
}

int fact(int n){
	
	if(n==0)
		return 1;
		return (n*fact(n-1));
	
}
