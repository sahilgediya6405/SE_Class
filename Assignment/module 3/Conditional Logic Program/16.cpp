/*16. Write a C program to read temperature in centigrade and display a suitable
message according to the temperature state below:
Temp < 0 then Freezing weather
Temp 0-10 then Very Cold weather
Temp 10-20 then Cold weather
Temp 20-30 then Normal in Temp
Temp 30-40 then Its Hot
Temp >=40 then Its Very Hot*/

#include<stdio.h>
int main(){
	float a;
	
	printf("Enter temperature:");
	scanf("%f",&a);
	
	if(a<=10){
		printf("%f is Very Cold weather",a);
	}else if(a>=10 && a<=20){
		printf("%f is Cold weather",a);
	}else if(a>=20 && a<=30){
			printf("%f is Normal in temp",a);
	}else if(a>=30 && a<=40){
			printf("%f its hot in temp",a);
	}else{
		  printf("%f its very hot in temp",a);
	}
}