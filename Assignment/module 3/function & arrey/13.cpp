
/* 13.WAP to accept 5 numbers from user and check entered number is even or odd
using of array */


#include<stdio.h>

int main(){
	int a[5],i;
	for(i=0;i<5;i++){
		printf("\n\n Enter any number chak odd or even : ",i);
		scanf("%d",&a[i]);
		
		if(a[i]%2==0){
		printf(" Numbmer you entered is even");
	}else{
		printf(" Numbmer you entered is odd");
	}
}
}

