//10.Write a program to concatenate the two strings using Operator Overloading

#include<iostream>
#include<string>
using namespace std;

class string_{
	public:
		string A;
		
		void get_data(){
			cout<<"\n Enter string :";
			cin.getline(A,sizeof(A));
		}
			string_ B;
			B.A=A+" "+ob.A;
			return(B);
		}
		void print_data(){
			cout<<"\n "<<A;
		}
};

int main(){
	string_ s1,s2,sum;
	
	s1.get_data();
	s2.get_data();
	
	sum=s1+s2;
	sum.print_data();
}
