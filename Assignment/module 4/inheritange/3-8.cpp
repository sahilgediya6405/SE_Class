/* 8. Write a program to Mathematic operation like Addition, Subtraction, Multiplication, Division Of two number using different parameters 
and Function Overloading */

#include<iostream>
using namespace std;

class calcualt{
	public:
		void addition(int x, int y){
			cout<<"\n addition of two number:"<<x+y;
		}
		void subtraction(double x, int y){
			cout<<"\n subtraction of two number:"<<x-y;
		}
		void multiplication(int x, double y){
			cout<<"\n multiplication of number:"<<x*y;
		}
		void division(double x, double y){
			cout<<"\n division of two number:"<<x/y;
		}
};

int main(){
	calcualt c1;
	
c1.addition(100,200);
c1.subtraction(100,200);
c1.multiplication(100,200);
c1.division(100,200);
}
