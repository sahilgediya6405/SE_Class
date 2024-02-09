
/* 7. Write a C++ program to implement a class called Date that has private
member variables for day, month, and year. Include member functions to
set and get these variables, as well as to validate if the date is valid.*/

#include<iostream>
using namespace std;
class Date{
	private:
		int date,month,year,l_y;
		int day[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	
	public:		
		void get_data(){
			cout<<"\n Enter Date :";
			cin>>date;
			cout<<" Enter Month : ";
			cin>>month;
			cout<<" Enter Year : ";
			cin>>year;
		}
		
		void validate(){			
			l_y=leap_year();
			if(l_y == 1){
				if(month==2){
					if(date <= day[month]+1){
						cout<<"\n "<<date<<"/"<<month<<"/"<<year;
						cout<<"\n This date is valid";
					}else {
						cout<<"\n This date is not valid";
					}
				}
			}else{
				if(date <= day[month]){
					cout<<"\n "<<date<<"/"<<month<<"/"<<year;
					cout<<"\n this date is valid";
				}
				else {
					cout<<"\n this date is not valid";
				}
			}	
		}
		
		int leap_year(){
			if((year%4==0  && year%100 != 0) || (year%400 == 0)){
				return 1;
			}else{
				return 0;
			}
		}
};

int main(){
	Date D1;
	D1.get_data();
	D1.validate();	
}

