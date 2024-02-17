//oops assessment 2

#include<iostream>
using namespace std;

class Customer_details{
	public:
		char name[50];
		public:	
	void customer_details(){
		cout<<"\n --------Tops Tech. Fast Food----------";
		
		cout<<"\n Place Enter Your Name:";
		cin.getline(name,sizeof(name));
		cout<<"\n Hello "<<name;
	}
};

class Customer_order:public Customer_details{
	public:
		int ch,quantity,i;
		
		public:
			
		void customer_order(){
			
		cout<<"\n What Would you like to order?";
		
		cout<<"\n ----------Manu--------";
		
		cout<<"\n 1) Pizzas";
		cout<<"\n 2) Burgers";
		cout<<"\n 3) Sandwich";
		cout<<"\n 4) Rolls";
		cout<<"\n 5) Biryani";
	
		
		cout<<"\n Please Enter your choice:";
		cin>>ch;
		
		
		
		switch(ch){
			case 1:
				cout<<"\n 1) Margarita pizza Rs.249/-";
				cout<<"\n 2) Chese Burst pizza Rs.279/-";
				cout<<"\n 3) Italian pizza Rs.239/-";
				cout<<"\n 4) Double Cheese Margarita Rs.285/-";
				
				cout<<"\n Place Enter which pizza you would like to have? :";
				cin>>ch;
				
				cout<<"\n Plase Enter Quantity:";
				cin>>quantity;
				
				cout<<"\n ---------- Your Order -------------\n";
				
				
				
				
				break;
				
			case 2:
				cout<<"\n 1) VEG CHILLI CHEESE Rs.95/-";
				cout<<"\n 2) PANEER KING Rs.119/-";
				cout<<"\n 3) BK VEGGIE Rs.69/-";
				cout<<"\n 4) VEG SURPRISE Rs.89/-";
				
				cout<<"\n Place Enter which burgers you would like to have? :";
				cin>>ch;
				
				cout<<"\n Plase Enter Quantity:";
				cin>>quantity;
				break;
				
			case 3:
				cout<<"\n 1) Club Sandwich Rs.49/-";
				cout<<"\n 2) Veg. Crispy Sandwich Rs.69/-";
				cout<<"\n 3) Spicy Pepper Sandwich Rs.80/-";
				cout<<"\n 4) Extream veg sandwich Rs.95/-";
				
				cout<<"\n Place Enter which sandwich you would like to have? :";
				cin>>ch;
				
				cout<<"\n Plase Enter Quantity:";
				cin>>quantity;
				break;
				
			case 4:
				cout<<"\n 1) VEG Roll Rs.70/-";
				cout<<"\n 2) Tikk Roll Rs.60/-";
				cout<<"\n 3) Poteto Roll Rs.75/-";
				cout<<"\n 4) VEG Panner Roll Rs.100/-";
				
				cout<<"\n Place Enter which roll you would like to have? :";
				cin>>ch;
				
				cout<<"\n Plase Enter Quantity:";
				cin>>quantity;
				break;
				
			case 5:
				cout<<"\n 1) CHICKEN BIRYANI Rs.299/-";
				cout<<"\n 2) MUTTON BIRYANT Rs.349/-";
				cout<<"\n 3) VEG BIRYANI Rs.189/-";
				cout<<"\n 4) PANEER TIKKA BIRYANI Rs.199/-";
				
				cout<<"\n Place Enter which biryani you would like to have? :";
				cin>>ch;
				
				cout<<"\n Plase Enter Quantity:";
				cin>>quantity;
				break;
		}
	}

		
	
};

int main(){
	
	 Customer_order c1;
	 
	 c1.customer_details();
	 c1.customer_order();
	
}