//13.Write a program to find the max number from given two numbers using friend function

#include<iostream>
#include<cmath>

using namespace std;
class max{
	private:
		int a,b;
		void get_data(){
			cout<<"\n Enter value of a :";
			cin>>a;
			cout<<" Enter value of b :";
			cin>>b;
		}
	friend void C(max& x);
};
	void C(max& x){
		temp.get_data();
		cout<<"\n max number is :"<<max(x.a,x.b);
	}

int main(){
	A a1;
	C(a1);
}
