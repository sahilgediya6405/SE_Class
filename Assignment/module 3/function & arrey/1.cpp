/*  1. Write a program to find out the max number from given array using
function */

#include<stdio.h>
void max();

int main(){
	max();
	
}

void max(){
	int a[5],i,j;
	
	for(i=0;i<5;i++){
		printf("Enter your number:");
		scanf("%d",&a[i]);
}
		/*for(i=0;i<5;i++){
	printf("\t %d",a[i]);

}

for(j=1;j<5;j++){
	printf("\t %d",a[j]);
}*/
		
		
		for(i=0;i<5;i++){
	for(j=1;j<5;j++){
	
	if(a[i]<a[j]){
		printf("%d",a[j]);
	}else if(a[j]<a[i]){
		printf("%d",a[i]);
}
}
}
}