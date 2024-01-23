//23. C Program to Reverse a Number Using FOR Loop


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
