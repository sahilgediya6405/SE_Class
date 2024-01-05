// 2. WAP to accept 5 numbers from user and display all numbers
#include<stdio.h>
int main(){
	int i,x[5];
	
   printf("Enter 5 number :");
   
   	for(i=1;i<=5;i++){
   		printf("\n Enetr number :");
   		scanf("%d",&x[i]);
	   }
	   
	for(i=1;i<=5;i++){
		printf("%d\n",x[i]);
	}
	
}