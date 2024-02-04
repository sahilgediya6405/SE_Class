//1. WAP to create simple calculator using class

#include<iostream>
using namespace std;

class calculater{
public:

float A,B,Total;

void get_value(){
	cout<<"\n Enter value of A:";
	cin>>A;
	
	cout<<"\n Enter value of B:";
	cin>>B;
	
}

void Addision(){
	
	Total=A+B;
	
	cout<<"\n Addition of two number"<<Total;
	
}

void subtreaction(){
	Total=A-B;
	
	cout<<"\n Subtrection of two number"<<Total;
	
}
	
void multiplication(){
	
	Total=A*B;
	
	cout<<"\n Multiplication of two number"<<Total;
}

void division(){
	Total=A/B;
	
	cout<<"\n Division of two number "<<Total;
}
/*void modulo(){
	Total = A%B;
		cout<<"\n modulo of two number "<<Total;
	
}*/
};
int main(){
	
	calculater c1;
	
	c1.get_value();
	c1.Addision();
	c1.subtreaction();
	c1.multiplication();
	c1.division();
//	c1.modulo();
}
