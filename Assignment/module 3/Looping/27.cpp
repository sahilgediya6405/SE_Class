<<<<<<< HEAD
// 27. 1/2 - 2/3 + 3/4 - 4/5 + 5/6 - ...... n

#include<stdio.h>

int main(){
	int i,n,b=1;
	
	printf("Enter number:");
	scanf("%d",&n);
	
	printf("%d",b);
	
	for(i=2;i<=n;i++){
		if(i%2==1){
	printf("/%d + %d",i,i);
}else{
	printf("/%d - %d",i,i);
}

	
	}

	printf("/%d",n+1);
	
	
=======
// 27. 1/2 - 2/3 + 3/4 - 4/5 + 5/6 - ...... n

#include<stdio.h>

int main(){
	int i,n,b=1;
	
	printf("Enter number:");
	scanf("%d",&n);
	
	printf("%d",b);
	
	for(i=2;i<=n;i++){
		if(i%2==1){
	printf("/%d + %d",i,i);
}else{
	printf("/%d - %d",i,i);
}

	
	}

	printf("/%d",n+1);
	
	
>>>>>>> 78f2e9e147150a23b69779e9cf4a703adc0fc38d
}