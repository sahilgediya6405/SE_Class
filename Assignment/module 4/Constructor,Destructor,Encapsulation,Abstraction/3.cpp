/* 3. Write a C++ program to create a class called Car that has private
member variables for company, model, and year. Implement member
functions to get and set these variables. */

#include<iostream>
using namespace std;

class car{
	private:
		char company[20];
		int model_no,year;
	public:
	void get_value(){
		cout<<"\n Enter car company name :";
		cin>>company;
		cout<<"\n Enetr car model number :";
		cin>>model_no;
		cout<<"\n Enter year you bought a car :";
		cin>>year;
		}
		
	void print_data(){
		cout<<"\n Enter car company name :"<<company;
		cout<<"\n Enetr car model number :"<<model_no;
		cout<<"\n Enter year you bought a car :"<<year;
	}
};
	int main(){
		car c1;
		
		c1.get_value();
		c1.print_data();
		
	}
		
		
