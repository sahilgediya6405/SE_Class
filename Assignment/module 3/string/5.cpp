/* 5. Write a program in C to compare two strings without using string library
      functions. */

#include<stdio.h>

int Compare_string(char x[],char y[],int n);

int main(){
	char a[20],b[20];
	int i,status=0;
	
	printf("\n Enter First string : ");
	gets(a);
	
	printf("\n Enter Scond string : ");
	gets(b);


	status=Compare_string(a,b,0);

		if(status==0){
			printf("\n strings are same");
		}else{
			printf("\n strings are not same");
		}	
	}

	int Compare_string(char x[],char y[],int n){
		int m;
		m=sizeof(x);
	
			if(x[n]!='\0'){
			if(x[n]!=y[n]){
				return 1;
			}else{
				return Compare_string(x,y,n+1);
			}
		}
	}

