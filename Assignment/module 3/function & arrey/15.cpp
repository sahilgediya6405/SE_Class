// 15.Store 5 numbers in array and sort it in ascending order


#include<stdio.h>
int main(){
	int a[5],r,c,b;
	
	for(r=0;r<5;r++){
		printf("  Enter value %d : ",r+1);
		scanf("%d",&a[r]);
	}
	for(r=0;r<5;r++){
		for(c=r+1;c<5;c++){
			if(a[r]>a[c]){
				b=a[r];
				a[r]=a[c];
				a[c]=b;
			}
		}
	}
	for(r=0;r<5;r++){
		printf("\t %d",a[r]);
	}
}





