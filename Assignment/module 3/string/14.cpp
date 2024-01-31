// 14.Write a program in C to combine two strings manually

#include<stdio.h>
#include<string.h>

void combine(char x[],char y[]); 		

int main(){
	char a[20],b[20];
	int i,l1;
	
	printf("\n Enter first string : ");
	gets(a);
	
	printf("\n Enter scond string : ");
	gets(b);
	
	combine(a,b);		
	printf(a);
}

void combine(char x[],char y[]){
	int i,l1;
	l1=strlen(x);
	for(i=0;y[i]!='\0';i++){
		x[l1++]=y[i];
	}
}


