/* 3. Create a class person having members name and age. Derive a class
student having member percentage. Derive another class teacher
having member salary. Write necessary member function to initialize,
read and write data. Write also Main function (Multiple Inheritance) */

#include<iostream>
using namespace std;

class person{
	protected:
		char name[50];
		int age;
	public:
		void get_read(){
		cout<<"\n Enter porson name:";
		cout<<(name,sizeof(name));
	}
		void write_data(){
		cout<<"\n Enter person age:";
		cin>>age;
	}
		
};
class student:public person{
	protected:
		float percentage;
	public:
		void get_read(){
		cout<<"\n Enter student persentage:";
	}
		void write_data(){
		cin>>percentage;
	}
		
};
class teacher:public student,public person{
	protected:
		int salary;
	public:
		void get_read(){
		cout<<"\n Enter teacher salary";
	}
		void write_data(){
		cin>>salary;
	}
};

int main(){
	display d1;
	d1.get_read();
	d1.write_data();
}