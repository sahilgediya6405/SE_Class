// 4. Write a program in C to count the total number of words in a string.

#include<stdio.h>
int main(){
	char a[50];
	int i,count=0;
	
	printf("\n Enter string : ");
	gets(a);
	
	for(i=0;a[i]!=0;i++){
		if(a[i]==' '){
			if(a[i+1]!=' '){
				count++;	
			}
		}
	}
	printf("\n Total number of words in a string is %d",count+1);
}

