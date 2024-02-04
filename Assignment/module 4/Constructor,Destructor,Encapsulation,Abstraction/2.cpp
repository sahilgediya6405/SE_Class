/* 2. Write a program of Addition, Subtraction, Division, Multiplication
usingconstructor. */

#include<iostream>
using namespace std;

class calculation{
	public:
		int A,B,Total;
		float a,b,total;
	calculation(){
		cout<<"\n Enter value of A:";
		cin>>A;
		
		cout<<"\n Enter value of B:";
		cin>>B;
		
		cout<<"\n Enter float of Division:";
		cin>>a;
		
		cout<<"\n Enter float of Division:";
		cin>>b;
		
		
	}
		
	void Add(){
		
		Total=A+B;
			cout<<"\n Addition of "<<A<<" and "<<B<<" is "<<Total;			
		
	}
	
		void Sub(){
		
		Total=A-B;
			cout<<"\n Substrection of "<<A<<" and "<<B<<" is "<<Total;			
		
	}
	
		void Mul(){
		
		Total=A*B;
			cout<<"\n Multiplication of "<<A<<" and "<<B<<" is "<<Total;			
		
	}
	
		void Div(){
		
		total=a/b;
			cout<<"\n Division of "<<a<<" and "<<b<<" is "<<total;			
		
	}
};

int main(){
	calculation c1;
	c1.Add();
	c1.Sub();
	c1.Mul();
	c1.Div();
}