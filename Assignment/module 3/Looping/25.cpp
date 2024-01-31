<<<<<<< HEAD
// 25.(1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n)

#include<stdio.h>
int main(){
	int i,n,b=1;
	
	printf("Enter number:");
	scanf("%d",&n);
	
	printf("(%d * %d)",b,b);
	
	for(i=2;i<=n;i++){
		printf("+(%d * %d)",i,i);
	}
=======
// 25.(1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n)

#include<stdio.h>
int main(){
	int i,n,b=1;
	
	printf("Enter number:");
	scanf("%d",&n);
	
	printf("(%d * %d)",b,b);
	
	for(i=2;i<=n;i++){
		printf("+(%d * %d)",i,i);
	}
>>>>>>> 78f2e9e147150a23b69779e9cf4a703adc0fc38d
}