/*
22. Accept 3 numbers from user using while loop and check each numbers
palindrome
*/

// palindrome number is something like original and it's reverse both number are same

#include<stdio.h>
int main(){
	int n,a,b,c;
	printf("\n Enter number: ");
	scanf("%d",&n);
	c=n;
	for( ;n!=0; ){
		a=n%10;
		b=b*10+a;
		n=n/10;
	}
	(c==b)?(printf("\n %d is palindrome",c)):(printf("\n %d is not palindrome",c));
	
}