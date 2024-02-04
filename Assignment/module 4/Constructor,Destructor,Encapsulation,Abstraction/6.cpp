/* 6. Write a C++ program to implement a class called Employee that has
private member variables for name, employee ID, and salary. Include
member functions to calculate and set salary based on employee
performance. Using of constructor */

#include<iostream>
using namespace std;

class  Employe{
	 private:
		char emp_name[20],ch;
		int emp_id,salary;
		public:
		Employe(){
			
			cout<<"\n Enter employ name:";
			cin>>emp_name;
			
			cout<<"\n Enter employ id:";
			cin>>emp_id;
			
			
			cout<<"\n====>>>> Employ performance <<<<=====";
			
			cout<<"\n A =>> Out Standing";
			cout<<"\n B =>> Excellent";
			cout<<"\n c =>> Very Good.";
			cout<<"\n D =>> Average";
			cout<<"\n E =>> Below Average";
			
			cout<<"\n Choice your perfomance:";
			cin>>ch;
			
			switch(ch){
				case 'A':
					cout<<"\n Your perfomance is Out Standing taht your salary is = 75,000/-";
				break;
				
				case 'B':
					cout<<"\n Your perfomance is Excellent taht your salary is = 50,000/-";
				break;
				
				case 'C':
					cout<<"\n Your perfomance is Very Good taht your salary is = 20,000/-";
				break;
				
				case 'D':
					cout<<"\n Your perfomance is Average taht your salary is = 35,000/-";
				break;
				
				case 'E':
					cout<<"\n Your perfomance is Below Average taht your salary is = 15,000/-";
				break;
			}
			}	
};
int main(){
	 Employe e1;
	 
}