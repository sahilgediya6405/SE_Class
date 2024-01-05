// 10.find the area of a rectangular prism formula : A=2(wl+hl+hw)

#include<stdio.h>

int main(){
	int a,w,l,h;
	
	printf("enter the width of  rectangular prism: ");
	scanf("%d",&w);
	
	printf("enter the length of rectangular prism:");
	scanf("%d",&l);
	
	printf("enter the height of rectangular prism:");
	scanf("%d",&h);
	
	// area of a rectangular prism
	
	a= 2*(w*l + h*l + h*w);
	
	printf(" area of a rectangular prism is %d",a); 
	
		return 0;		
}