/* 8-b. Write a program of structure for five employee
that provides the following information -print and
displayempno, empname, address andage */

#include<stdio.h>

void print();
void display();


int main(){
print();
display();
};

struct emp{
	int emp_no,emp_andage;
	char emp_name[20],address[50];
	
}e1,e2;

void print(){

printf("Enter Employ name:");
gets(e1.emp_name);

printf("Eeter Employ Address:");
gets(e1.address);
	
printf("Enter Employ number:");
scanf("%d",&e1.emp_no);

printf("Enter Employ age:");
scanf("%d",&e1.emp_andage);
};
void display(){
	
printf("\n Employ name is %s",e1.emp_name);
printf("\n Emeloy address is %s",e1.address);
printf("\n Employ name is = %d ",e1.emp_no);
printf("\n Employ age is = %d ",e1.emp_andage);

};
