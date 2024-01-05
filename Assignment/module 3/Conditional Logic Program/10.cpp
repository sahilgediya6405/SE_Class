// 10.WAP to check whether a number is negative, positive or zero.

#include<stdio.h>

int main(){
	int a;
	
	printf("\n Enetr Your Number:");
	scanf("%d",&a);
	
	if(a<0){
		printf("\n %d is nagativ.",a);
	}else if(a>0){
		printf("\n %d is positiv.",a);
	}else{
		printf("\n %d IS Zero.",a);
	}
}