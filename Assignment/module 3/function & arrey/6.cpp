/*
6. WAP to make addition, Subtraction and multiplication of two matrix using
2-D Array
*/

#include<stdio.h>
int i,j,k,a[3][3],b[3][3],c[3][3];

void addition();
void substraction();
void multiplication();

void print_c();

int main(){
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf(" Enter the value of a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf(" Enter the value of b[%d][%d] : ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	
	addition();
	printf("\n");
	substraction();
	printf("\n");
	multiplication();
}

void addition(){
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			c[i][j]=a[i][j]+b[i][j];
				printf(" Addition of  a[%d][%d]=%d ",i,j,c);	
		}
	}
}

void substraction(){
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			c[i][j]=a[i][j]-b[i][j];
			printf(" subtrection of  a[%d][%d]=%d ",i,j,c);
		}
	}
}



void multiplication(){
	int d;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			c[i][j]=0;
			for(k=0;k<3;k++){
			d=(a[i][k]*b[k][j]);
			c[i][j]=c[i][j]+d;
			printf(" multiplication of  a[%d][%d]=%d ",i,j,c);
			}			
		}
	}	
}

/*void print_c(){
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(c[i][j]>=0 && c[i][j]<10){
				printf("   %d ",c[i][j]);	
			}else if(c[i][j]<100){
				printf("  %d ",c[i][j]);
			}else{
				printf(" %d ",c[i][j]);
			}
		}printf("\n");
	}*/


