/* 5. WAP to take two Array input from user and sort them in ascending or
descending order as per users choice */

#include<stdio.h>

int x[5],i,j,k;

void accending();
void decending();

int main(){
	int a;
	
		for(i=0;i<5;i++){
			printf(" Enter Element %d : ",i);
			scanf("%d",&x[i]);
		}
	
			printf("\n 1. accending order");
			printf("\n 2. decending order");
			scanf("%d",&a);
			
			
			if(a==1){
				accending();	
			}else if(a==2){
				decending();	
			}else{
				printf("\n !!WRONG CHOICE!!");	
			}
		}


 	void accending(){
 		int b;
 	
			for(i=0;i<5;i++){
				for(j=i+1;j<5;j++){
					if(x[i]>x[j]){
					b=x[i];
					x[i]=x[j];
					x[j]=b;
				}
			}
		}
			for(k=0;k<5;k++){
				printf(" %d ",x[k]);
			}
 		}
 
 	void decending(){
 		int b;
 	
			for(i=0;i<5;i++){
				for(j=i+1;j<5;j++){
				if(x[i]<x[j]){
				b=x[i];
				x[i]=x[j];
				x[j]=b;
			}
		}
	}
			for(k=0;k<5;k++){
				printf(" %d ",x[k]);
			}
 		}
 
 