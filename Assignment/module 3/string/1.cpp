#include<stdio.h>

int main(){
	char name[20];
	int i;

	printf("\n Eentr your string :");	
	gets(name);
	puts(name);
	
	int length=0;
	for(i=0;name[i]!=0;i++){
		
		length++;
	}
	printf("\n total lanth = %d",length);

}
