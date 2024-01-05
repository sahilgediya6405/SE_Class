/* 4. WAP to make simple calculator (operation include Addition,
Subtraction,Multiplication, Division, modulo) using conditional
statement */

#include<stdio.h>
int main(){
	int A,B,ch;
//	char '+','-','*','/','%';
	
	printf("\n Enter a number:");
	scanf("%d",&A);
	
	printf("\n Enter a number:");
	scanf("%d",&B);
	
	printf("\n 1.Addition \n 2.Subtraction \n 3.Multiplication \n 4.Division \n 5.Modulo");
	
	
	printf("\n Enter your choice(1-5):");	
	scanf("%d",&ch);
	
	
	
	if(ch==1){
		printf("%d + %d = %d",A,B,A+B);
	}else if(ch==2){
		printf("%d - %d = %d",A,B,A-B);
	}else if(ch==3){
		printf("%d * %d = %d",A,B,A*B);
	}else if(ch==4){
		printf("%d / %d = %d",A,B,A/B);
	}else if(ch==5){
		printf("%d Modulo %d = %d",A,B,A%B);
	}else{
		printf("Wrong Ch!!!");
	}
}
	