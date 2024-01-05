/* 8. WAP to accept the height of a person in centimeters and categorize the
person according to their height.*/

#include<stdio.h>
int main(){
	float h;
	
	printf("Enter your height:");
	scanf("%f",&h);
	
	if(h<=4.5){
		printf("Your Height is Small");
	}else if(h==4.6 || h<=5){
		printf("Your Height is Medium");
	}else {
		printf("your Height is Large");
	}
}