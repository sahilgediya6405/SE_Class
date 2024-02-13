// 4. Write a C++ Program display Student Mark sheet using Multiple inheritance

#include<iostream>
using namespace std;

class student_info{
	public:
		char name[30];
		int R_n;
	public:	
		void get_details(){
			cout<<"\n Enter Student name:";
			cin.getline(name, sizeof(name));
			
			cout<<"\n Enetr student rollno:";
			cin>>R_n;
		}
};

class student_mark {
	public:
		float english,hindi,maths,scince,total,t_m;
		
	public:
		void get_mark(){
			cout<<"\n Enter English marks:";
			cin>>english;
			
			cout<<"\n Enter hindi marks:";
			cin>>hindi;
			
			cout<<"\n Enter maths marks:";
			cin>>maths;
			
			cout<<"\n Enter scince marks:";
			cin>>scince;
			
			t_m=english+hindi+maths+scince;
			cout<<"\n Total marks is:"<<t_m;
			
			total=t_m*100/400;
			cout<<"\n Your parsentage is:"<<total;
		}
		void student_gread(){
			if(total<35){
				cout<<"\n Fail...!!! \n Need to work hard";
			}else if(total=35 && total<=50){
				cout<<"\n Pass class... \n Good";
			}else if(total=51 && total<=60){
				cout<<"\n Scond class... \n Very Good";
			}else if(total=61 && total<=75){
				cout<<"\n Firat class... \n Excellent";
			}else{
				cout<<"\n Distinction... \n Out Standing";
			}
		}
};


class display:public student_info,public student_mark{
	public:
	void student_display(){	
	cout<<"\n Student roll no is :"<<R_n;
	cout<<"\n English mark is : "<<english;
	cout<<"\n hindi marks is : "<<hindi;
	cout<<"\n maths marks is : "<<maths;
	cout<<"\n scince marks is : "<<scince;
	cout<<"\n Student total marks is : "<<t_m;
	cout<<"\n Student parsentage is : "<<total;
	
	}
};

int main(){
	display d1;
	d1.get_details();
	d1.get_mark();
	d1.student_gread();
	d1.student_display();
}