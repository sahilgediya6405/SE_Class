/* 1. Write a programto find the multiplication values and the cubic values
usinginline function */

#include<iostream>
using namespace std;

class claculation{
	public:
	int a,b,cub;
	public:
		void gets();
		void multiplication();
		void club();
	};
		
	inline void claculation :: gets(){
		cout<<"\n Enter number of a:";
		cin>>a;
		
		cout<<"\n Enter number of b:";
		cin>>b;
		
		cout<<"\n Enter number of cubic:";
		cin>>cub;
	}
	
	inline void claculation :: multiplication(){
		
		cout<<"\n Multiplication of two number is "<<a*b;
	}
	
	inline void claculation ::  club(){
		cout<<"\n club of "<<cub<<" number is "<<cub*cub*cub;	
	}

int main(){
	claculation c1;
	c1.gets();
	c1.multiplication();
	c1.club();
}