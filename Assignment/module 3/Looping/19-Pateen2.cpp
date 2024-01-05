/*
19. Patterns: 2
A
BC
DEF
GHIJ
KLMNO
*/

#include<stdio.h>
int main(){
	int r,c,n,a=65;
	
	printf("Enter numer print:");
	scanf("%d",&n);
	
	for(r=1;r<=n;r++){
		for(c=1;c<=r;c++){
			printf(" %c ",a);
			a++;
		}
		printf("\n");
	}
}