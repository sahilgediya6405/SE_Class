// 28.Convert years into days and months

#include<stdio.h>
int main(){
int Month=12;
float Year;
double Day=365.25;

printf("\n Enetr number of year:");
scanf("%f",&Year);

Day=Year*Day;
Month=Year*Month;

printf("\n year to convert day that day is %2f",Day);

printf("\n year to convert month that month is %d",Month);

return 0;
}