// 9. Write a Program of Two 1D Matrix Addition using Operator Overloading

#include<iostream>
using namespace std;

class A{
	public:
		int i;
		int a[5];
		
		void get_matrix(){
			for(i=0;i<5;i++){
				cout<<"a["<<i<<"] = ";cin>>a[i];
			}cout<<"\n";
		}
		A operator+(A ob){
			A b;
			for(i=0;i<5;i++){
				b.a[i]=a[i]+ob.a[i];
			}
			return(b);
		}
		void print_data(){
			for(i=0;i<5;i++){
				cout<<" "<<a[i];
			}
		}
};

int main(){
	A a1,a2,sum;
	
	a1.get_matrix();	
	a2.get_matrix();
	
	sum=a1+a2;
	sum.print_data();

}
