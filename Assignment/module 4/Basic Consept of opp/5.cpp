/* 5. Write a C++ program to create a class called Rectangle that has private
member variables for length and width. Implement member functions to
calculate the rectangle's area and perimeter. */

#include<iostream>
using namespace std;

class  rectangle{
	private:
		float length,width,Total;
		public:
	
			void get_data(){
				cout<<"\n Enter langth of rectangle:";
				cin>>length;
				
				cout<<"\n Enter width of rectangle:";
				cin>>width;
				
			}
			void area(){
				
				Total = length*width;
				
				cout<<"\n Area of rectangle is = "<<Total ;
			}
			
			void perimeter(){
				Total= 2*(length+width);
				
				cout<<"\n perimeter of rectangle is = "<<Total;
			}
	
};

int main(){
		rectangle r1;
		
		r1.get_data();
		r1.perimeter();
		r1.area();		
	
}


	
	
