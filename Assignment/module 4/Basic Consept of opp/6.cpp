/*	6. Write a C++ program to create a class called Person that has private
member variables for name, age and country. Implement member
functions to set and get the values of these variables. */

#include<iostream>
#include<string>
using namespace std;

class person{
	private:
		
	int age;
	char name[20],country[10];
	
	public:
		
		void get_data(){
			cout<<"\n Enter your name:";
			cin.getline(name, sizeof(name)); 
			
			cout<<"\n Enter your age:";
			cin>>age;
			
			cout<<"\n Enter your country name:";
			cin>>country;
			
  		}
		
		void print(){
			cout<<"\n Your name is = "<<name;
			cout<<"\n Your age is = "<<age;
			cout<<"\n Your country name is "<<country;
		}
		
};

int main(){
	person p1;
	p1.get_data();
	p1.print();
}