/* 8. WAP to reverse a string and check that the string is palindrome
or notWrite a program of structure employee that provides the
following
--------------------------------------------------------------------------------------------------------------------------
	a. information -print and display empno, empname,
	address,andage
---------------------------------------------------------------------------------------------*/
#include<stdio.h>
#include<string.h>

void string();
int main(){
	string();
}
void string(){


	char E_name[20],E_add[50];
	int E_no;
	
	printf("\n Enter Employ name:");
	gets(E_name);

	
	printf("\n Enter Employ Address:");
	gets(E_add);

	
	printf("\n Enter Employ no:");
	scanf("%d",&E_no);
	
	printf (" \n Brfour the reverse of a string: %s ",E_name);  
	printf (" \n Befour the reverse of a string: %s ",E_add);
	printf("\n Empoly number is %d",E_no);
	
	printf (" \n After the reverse of a string: %s ", strrev(E_name));  
	printf (" \n After the reverse of a string: %s ", strrev(E_add));
	
}