/* 7. Write a C++ program to implement a class called Date that has private
member variables for day, month, and year. Include member functions to
set and get these variables, as well as to validate if the date is valid */

#include<iostream>
using namespace std;

class Date{
	private:
		int date,month,year;
	
	public:
		void get_value(){
			cout<<"\n Enter day :";cin>>date;
			cout<<" Enter month : ";cin>>month;
			cout<<" Enter year : "; cin>>year;
		}
		
		void velid_date(){
			if(date<=31 && month==01){// !! month==03 !! month==05 !! month==07 !! month==08 !! month==10 !! month==12){
				cout<<"\n this date is valid";
			}else if(date<=30 && month==04){// !! month==06 !! month==09 !! month==11){
				cout<<"\n this date is valid";
			}else if(date<=29 && year%4==0){
				cout<<"\n this date is valid";
			}else if(date<=28 && year%4!=0){
				cout<<"\n this date is valid";
			}else{
				cout<<"\n date is not velid";
			}
		}
};


int main(){
	Date D1;
	D1.get_value();
	D1.velid_date();
}