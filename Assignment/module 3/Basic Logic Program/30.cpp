// 30. WAP to convert years into days and days into years

#include<stdio.h>
int main(){
float Year;
double Day=365.25;

printf("\n Enetr number of year:");
scanf("%f",&Year);

Day=Year*Day;

printf("\n year to convert day that day is %2f",Day);

Day=Year/Day;

printf("\n day to convert day that year is %f",Year);

return 0;

}