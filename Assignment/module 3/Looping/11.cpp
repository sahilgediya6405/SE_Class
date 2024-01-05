/*
11.Accept 5 names from user at run time.
*/

#include<stdio.h>
int  main(){
	int i;
	char Name[20];
	
	for(i=1;i<=5;i++){
		printf("\n\n Enter your name (%d) : ",i);
		scanf(" %s",&Name);
		printf(" %s",Name);
	}
}