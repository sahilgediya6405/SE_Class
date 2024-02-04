/*5. Write a C++ program to create a class called Triangle that has private
member variables for the lengths of its three sides. Implement member
functions to determine if the triangle is equilateral, isosceles, or scalen */

#include<iostream>
using namespace std;

class triangle{
	private:
		float t1,t2,t3;
		
	public:
	void determine(){
			
			if(t1==t2 || t2==t3 || t1==t3){
				cout<<"\n the triangle is isosceles";
			}else if(t1==t2 && t2==t3){
				cout<<"\n the triangle is equilateral";
			}else{
				cout<<"\n the triangle is  scelene";
			}
		}
};

int main(){
	triangle t1;
	t1.determine();
}

