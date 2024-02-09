/* 8. Write a C++ program to implement a class called Student that has private
member variables for name, class, roll number, and marks. Include
member functions to calculate the grade based on the marks and display
the student's information. Accept address from each student implement
using of aggregation */

#include<iostream>
using namespace std;

class student{
	private:
		char name[20],clas;
		int r_n,mark;
		
	public:
		void get_value(){
			cout<<"\n Enter student name:";
			cin.getline(name, sizeof(name));
			
			cout<<"\n Enetr student class Div:";
			cin>>clas;
			
			cout<<"\n Enter student roll no:";
			cin>>r_n;
			
			cout<<"\n Enter student mark:";
			cin>>mark;
		}
		void calculate(){
			if (mark<35){
				cout<<"\n Your mark is = "<<mark<<" Fail";
			}else if(mark>=35 && mark<=49){
					cout<<"\n Your mark is = "<<mark<<" Pass";
			}else if(mark>=50 && mark<=59){
					cout<<"\n Your mark is = "<<mark<<" Scond Class";
			}else if(mark>=60 && mark<= 79){
					cout<<"\n Your mark is = "<<mark<<" First Class";
			}else if(mark>=80){
						cout<<"\n Your mark is = "<<mark<<" Distinction";
			}
			
		}
		
		void display(){
			cout<<"\n Student name:"<<name;
			cout<<"\n Student class Div:"<<clas;
			cout<<"\n Student roll no:"<<r_n;
			cout<<"\n Student mark:"<<mark;
		}
};

int main(){
	student s1;
	s1.get_value();
	s1.calculate();
	s1.display();
}
