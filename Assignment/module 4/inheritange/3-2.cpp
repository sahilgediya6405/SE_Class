//2. Write a C++ Program to find Area of Rectangle using inheritance

#include<iostream>
using namespace std;

class rectangle{
	protected:
	int l,w;
	public:
		int value(int p,int q){
			l=p;
			w=q;
		}	
};

class Area:public rectangle{
	private:
	 int total;
	public:
		void R_area(){
			total=l*w;

		cout<<"\n Area of rectangle is "<<total;

		}
};

int main(){
	int l,w;
	Area a1;
	cout<<"\n Enter lanth of rectangle:";
	cin>>l;
	cout<<"\n Enetr width of rectangle:";
	cin>>w;
	a1.value(l,w);
	a1.R_area();
	}