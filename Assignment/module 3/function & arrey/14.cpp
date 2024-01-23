// 14.Perform 2D matrix array


#include<stdio.h>
int main(){
	int a[3][3],r,c;
	
	for(r=0;r<3;r++){
		for(c=0;c<3;c++){
			printf(" Enter the value of a[%d][%d] : ",r,c);
			scanf("%d",&a[r][c]);
		}
	}
	printf("\n\n");
		for(r=0;r<3;r++){
			for(c=0;c<3;c++){
				printf(" %d ",a[r][c]);
			}printf("\n");
		}
}


