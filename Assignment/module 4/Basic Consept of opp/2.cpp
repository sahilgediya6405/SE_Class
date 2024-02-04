/* 2. Define a class to represent a bank account. Include the following members:

3.						  =: Data Member :=

-Name of the depositor
-Account Number
-Type of Account
-Balance amount in the account

                         =: Member Functions :=
                           
-To assign values
-To deposited an amount
-To withdraw an amount after checking balance
-To display name and balance */

#include<iostream>
#include<string>
using namespace std;

class bank{
	public:
		int Account_no,Balance=500,amount;
		char name[20],T_A[10];
		
		public:
		void get_data(){
			
			cout<<"\n Enetr account Holder name:";
			cin.getline(name, sizeof(name));
			
			cout<<"\n Enetr account number:";
			cin>>Account_no;
				
			cout<<"\n Enter type of account:";
			cin>>T_A;
			
			cout<<"\n Your account balence is "<<Balance;
		}
		
		void deposit(){
			cout<<"\n Enetr deposit amount:";
			cin>>amount;
			
			Balance=amount+Balance;
			
			cout<<"\n Your avelabal account balence is "<<Balance;
			
		}
		
		void withdraw(){
			
			cout<<"\n Enetr withdraw amount:";
			cin>>amount;
			
			if(amount>Balance){
				cout<<"\n This amount is not in your account ";
				cout<<"\n Your avelabal account balence is "<<Balance;
			}else{
			Balance=Balance-amount;
			
			cout<<"\n Your avelabal account balence is "<<Balance;
		}
		}
		
		void printf(){
			cout<<"\naccount number:"<<Account_no;
			
			cout<<"\n account Holder name:"<<name;
				
			cout<<"\n Enter type of account:"<<T_A;
			
			cout<<"\n Your avelabal account balence is "<<Balance;
		}
};
int main(){
	                                               
	int ch;
	
	bank A1;
	A1.get_data();
	
	cout<<"\n=====>>>> MENU <<<<=====";
	cout<<"\n 1)Deposit AMount.";
	cout<<"\n 2)Withdraw Amount.";
	cout<<"\n 3)View Account Details.";
		
	cout<<"\n Enter your choice.";
	cin>>ch;
	
	switch(ch){
		case 1:
			A1.deposit();
			break;
			
		case 2:
			A1.withdraw();
			break;
			
		case 3:
			A1.printf();
			break;
			
		default:
			cout<<"\n !! WRONG CHOICE !! \n plz Enter velid choice.";
			break;	
		
	}
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
