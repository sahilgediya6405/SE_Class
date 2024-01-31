/* assessment 1:
	Multiplication of two matrix */


#include<stdio.h>

int main(){
	int r,c,k,a[2][2],b[2][2],result[2][2];  
	
	printf("                        Matrix Multiplivation                \n");
	printf("\n ---------Matrix 1---------\n\n");
	for(r=0;r<2;r++){   // using print matrix row
		for(c=0;c<2;c++){ // using print matrix colum
			printf("Enter element : ");
			scanf("%d",&a[r][c]);	
		}
	}
	printf("\n");
	for(r=0;r<2;r++){   // using print matrix row
		for(c=0;c<2;c++){ // using print matrix colum
			printf("%d \t",a[r][c]);
		}
		printf("\n");
	}


	printf("\n ---------Matrix 2---------\n\n");
	for(r=0;r<2;r++){   // using print matrix row
		for(c=0;c<2;c++){ // using print matrix colum
			printf("Enter element : ");
			scanf("%d",&b[r][c]);	
		}
	}
	printf("\n");
	for(r=0;r<2;r++){   // using print matrix row
		for(c=0;c<2;c++){ // using print matrix colum
			printf("%d \t",b[r][c]);
		}
		printf("\n");
	}


	printf("\n ---------Result : Multiplication Matrix ---------\n\n");
	for(r=0;r<2;r++){   // using print matrix row
		for(c=0;c<2;c++){ // using print matrix colum
			result[r][c]=0;
			 for(k=0;k<2;k++) {
                result[r][c]+=a[r][k]*b[k][c]; //Multiplication of matrix
            }
        }
    }
    
    for(r=0;r<2;r++){
        for(c=0;c<2;c++){
            printf("%d \t",result[r][c]);
        }
        printf("\n");
    }
}