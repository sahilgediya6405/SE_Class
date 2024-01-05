/* 3. WAP to take 10 no. Input from user find out below values
a. How many Even numbers are there
b. How many odd numbers are there
c. Sum of even numbers
d. Sum of odd numbers */

#include<stdio.h>
int main(){
	int i,a[10],sum_e,sum_o;
	
	printf("Enetr 10 number:");
	for(i=1;i<=10;i++){
		printf("\n Enetr number:");
		scanf("%d",&a[i]);
	}
	
	for(i=1;i<=10;i++){
		if(a[i]%2==0){
		printf("\n even number there.");
		printf("%d",a[i]);
	}
	}
	
	for(i=1;i<=10;i++){
		if(a[i]%2!=0){
			printf("\n\n odd number there.");
			printf("%d",a[i]);
		}
	}
	for(i=1;i<=10;i++){
		if(a[i]%2==0){
			sum_e=sum_e+a[i];
	}else{
		sum_o=sum_o+a[i];
	}
	
}
	printf("\n\n Sum of even number is %d",sum_e);
	printf("\n\n Sum of odd number is %d",sum_o);
			

}


