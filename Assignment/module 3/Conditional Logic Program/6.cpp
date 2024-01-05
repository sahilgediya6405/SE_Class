//6. Find the Character Is Vowel or Not

#include<stdio.h>

int main(){
	char a;
	
	printf("Enter your ch:");
	scanf("%c",&a);
	
	if(a=='a'|| a=='e'|| a=='i'|| a=='O'|| a=='u'){
		printf("%c is vowel.", a);
	}else{
		printf("%c is not vowel.",a);
	}
}