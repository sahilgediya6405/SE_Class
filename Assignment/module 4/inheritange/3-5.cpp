/* 5. Assume that the test results of a batch of students are stored in three
different classes. Class Students are storing the roll number. Class Test
stores the marks obtained in two subjects and class result contains the
total marks obtained in the test. The class result can inherit the details
of the marks obtained in the test and roll number of students.
(Multilevel Inheritance) */


#include<iostream>
using  namespace std;

class student{
	protected:
	int rollno;
	
	public:
	void get_details(){
		cout<<"\n Enter student rollno:";
		cin>>rollno;
	}
};

class test:public student{
	protected:
		int maths,scince;
		
	public:
	void get_mark(){
		cout<<"\n Enetr student maths mark:";
		cin>>maths;
		
		cout<<"\n Enter student scince mark:";
		cin>>scince;
		
	}
};
class result:public test{
	public:
	void display(){
		cout<<"\n Student rollno is : "<<rollno;
		cout<<"\n Student maths mark is : "<<maths;
		cout<<"\n Student scince mark is : "<<scince;
	}
		
};

int main(){
	result r1,r2;
	
	r1.get_details();
	r1.get_mark();
	r1.display();
	
	r2.get_details();
	r2.get_mark();
	r2.display();
}