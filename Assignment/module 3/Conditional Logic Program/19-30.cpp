  /* 19. Write a program in C to calculate and print the electricity bill of a given
  customer. The customer ID, name, and unit consumed by the user should
  be captured from the keyboard to display the total amount to be paid to the
  customer. The charge are as follow :

 
  20. Unit                                                       21. Charge/unit
  22. upto 350                                                   23. @1.20
  24. 350 and above but less than 600                            25. @1.50
  26. 600 and above but less than 800                            27. @1.80
  28. 800 and above                                              29. @2.00 
  
  30. If bill exceeds Rs. 800 then a surcharge of 18% will be charged andthe
minimum bill should be of Rs. 256     */
  
  #include<stdio.h>
  int main(){
  	
int id;
char name[30];
float unit,total_u,charge;

printf("Enter coustmer id:");
scanf("%d",&id);

printf("Enter coustmer name:");
scanf(" %s", &name);

printf("Enter consumed unit :");
scanf("%f",&unit);

printf("\n =========ELECRICITY BILL============");
printf("\n Coustmer ID is %d",id);
printf("\n Coustmer name is %s",name);
printf("\n Coustmer unit is %f",unit);

if(unit<=350){
	total_u=unit*1.20;
}else if(unit>=350 && unit<=600){
	total_u=unit*1.50;
}else if(unit>=600 && unit<=800){
	total_u=unit*1.80;
}else{
	total_u=unit*2.00;
}


if(total_u<=256){
	printf("\n Accepted Minimum bill is upto rs.256");
}else{
	printf("\n Total unit use is %f",total_u);
}

if(total_u>800){
	charge=total_u*18/100;
	printf("\n your bill charge is %f",charge); 
	charge=total_u+charge;
	printf("\n your total bill is %f",charge);
}
return 0;
}

