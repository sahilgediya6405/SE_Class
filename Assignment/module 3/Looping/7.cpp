/* 7. WAP to print number in reverse order e.g.: number = 64728 --->
reverse =82746 */

#include<stdio.h>
int main(){
	
int i,n,a=0;

printf("Enetr number:");
scanf("%d",&n);

while(n!=0){
	i=n%10;
	a=a*10+i;
	n/=10;

}

 printf("revers number %d",a);
}