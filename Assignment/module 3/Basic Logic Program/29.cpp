//29.Convert minutes into seconds hours

#include<stdio.h>
int main(){
	float minutes,seconds=60,houes=60;
	
	printf("Enetr minutes:");
	scanf("%f",&minutes);
	
	seconds=minutes*seconds;
	houes=minutes/houes;
	
	printf("minutes into seconds is %f",seconds);
	printf("minutes into houes is %f",houes);
}
