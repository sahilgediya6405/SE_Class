// 7. Write a C++ Program to illustrates the use of Constructors in multilevel inheritance

#include<iostream>
using namespace std;

class f_add{
	public:
		f_add(){
			cout<<"\n class f_add";
		}
		f_add(int a, int b){
			cout<<"\n a + b : "<<a+b<<"\t constructor in f_add ";
		}
};

class s_add:public f_add{
	public:
		s_add(){
			cout<<"\n class s_add";
		}
		
		s_add(int a,int b, int c):f_add(a,b){
			cout<<"\n c = "<<c<<"\t\t constructor in s_add";
		}	
};

class t_add:public a_add{
	public:
		t_add(){
			cout<<"\n class t_add";
		}
		
		t_add(int a, int b, int c):s_add(a,b,c){
			cout<<"\n constructor in t_add";
		}
};

int main(){
	t_add add1;
	
	
/*	B obj2(10,20,30);
	cout<<"\n";
	C obj3(1,2,3);*/
	
}
