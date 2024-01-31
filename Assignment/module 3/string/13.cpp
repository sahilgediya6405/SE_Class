// 13.Write a program in C to remove characters from a string except alphabets.

#include<stdio.h>

void remove(char x[]);

int main(){
	char a[100];
	
	printf("\n Enter the string : ");
	gets(a);
	
	remove(a);
	printf(a);
	
}

void remove(char x[]){
	int i,j=0;
	for(i=0;x[i]!='\0';i++){
		if((x[i]>='a' && x[i]<='z') || (x[i]>='A' && x[i]<='Z')){
			x[j]=x[i];
			j++;
		}	
	}
	x[j]='\0';
}

