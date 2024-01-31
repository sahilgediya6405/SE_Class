<<<<<<< HEAD
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
=======
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
>>>>>>> 78f2e9e147150a23b69779e9cf4a703adc0fc38d
