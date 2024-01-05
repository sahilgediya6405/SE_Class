/*
17.Calculate 5 numbers from user and calculate number of even and odd using
of while loop
*/

#include<stdio.h>
int main(){
	int i=1,even,odd,n;
	even=0;odd=0;
	while(i<=5){
		printf("\n Enter any number %d :",i);
		scanf("%d",&n);
		if(n%2==0){
			even++;
		}else{
			odd++;
		}
		i++;
	}
	printf("\n %d is even number and %d is odd numbers",even,odd);
}