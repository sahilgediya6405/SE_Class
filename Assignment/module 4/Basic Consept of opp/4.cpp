/* 4. Write a C++ program to implement a class called Circle that has private
member variables for radius. Include member functions to calculate the
circle's area and circumference.*/

#include<iostream>
using namespace std;

class circal{
	private:
		float pi=3.14,r,Total;
		public:
			
			void get_value(){
				cout<<"\n Enter radius of circal:";
				cin>>r;
			}
			void  radius(){
				Total=pi*r*r;
				
				cout<<"\n Radius of circal is "<< Total;
			}
			
			void  circumference(){
				Total=2*pi*r;
				
				cout<<"\n  Circumference of circal is "<<Total;
			}
};
int main(){
	circal c1;
	
	c1.get_value();
	c1.radius();
	c1.circumference();
}

