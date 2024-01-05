/* 12.Accept number of students from user. I need to give 5 apples to each
student. How many apples are required? */

#include<stdio.h>

int main(){
	       
		   int S,A;
		   printf("enter number of the student:");
		   scanf("%d",&S);
		   
		   A=S*5;
		   
		   printf("Total required apple is  %d",A);
		   return 0;
  
	
}