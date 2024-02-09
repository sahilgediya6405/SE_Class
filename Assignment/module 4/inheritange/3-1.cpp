/* 1. Assume a class cricketer is declared. Declare a derived class batsman
from cricketer. Data member of batsman. Total runs, Average runs and
best performance. Member functions input data, calculate average
runs, Displaydata. (Single Inheritance) */

#include<iostream>
using namespace std;

class cricketer{
	public:
		int t_r,b_p,t_m;
		float a_r;
		char name[20];
	public:
		void get_data(){
			cout<<"\n Enter criketer name:";
			cin.getline(name, sizeof(name));
			cout<<"\n Enter total creketer runs:";
			cin>>t_r;	
			cout<<"\n Enetr total match played criketer:";
			cin>>t_m;
			cout<<"\n Enetr best perfomance of cricketer:";
			cin>>b_p;
		}
};
class Average_run:public cricketer{
		public:
		void average(){
				a_r=t_r/t_m;
				cout<<"\n\n Average of runs is "<<a_r;
			}
			
		void display(){
			cout<<"\n\n Criketer name is "<<name;
			cout<<"\n Total creketer runs is "<<t_r;	
			cout<<"\n Total match played criketer is "<<t_m;
			cout<<"\n Average of runs is "<<a_r;
			cout<<"\n Best perfomance of cricketer is "<<b_p;
		}			
};
int main(){

Average_run c1;
c1.get_data();
c1.average();
c1.display();

}