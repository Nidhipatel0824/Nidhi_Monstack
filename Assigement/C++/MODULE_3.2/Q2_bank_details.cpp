/* Define a class to represent a bank account. Include the following members:
1. Data Member:
-Name of the depositor
-Account Number
-Type of Account
-Balance amount in the account

2. Member Function
-To assign values
-To deposited an amount
-To withdraw an amount after checking balance
-To display name and balance*/


#include<iostream>
using namespace std;

class bank{
	public:
		char name[30],account[20];
		double num,bal;
		
		void inputb()
		{
			fflush(stdin);
			
			cout<<"Name of the Depositer : ";
			gets(name);
			cout<<"Account Number : ";
			cin>>num;
			fflush(stdin);
			cout<<"Type of Account : ";
			gets(account);
			cout<<"Balance Amount in the Account : ";
			cin>>bal;
		}
		
		void displayb()
		{
			double deamo;
			
			cout<<endl<<"Enter Deposit Amount : ";
			cin>>deamo;
			bal+=deamo;
		}
		
		void inputm()
		{
			double weamo;
			
			cout<<endl<<"Enter Withdraw an Amount : ";
			cin>>weamo;
			
			if(weamo<bal)
			{
				bal-=weamo;
			}
			else
			{
				cout<<endl<<"Can not Withdraw an Amount"<<endl;
			}
			
			
		}
		
		void displaym()
		{
			cout<<endl<<"Name of the Depositer : "<<name<<endl;
			cout<<"Account Number : "<<num<<endl;
			cout<<"Type of Account : "<<account<<endl;
			cout<<"Balance Amount in the Account : "<<bal<<endl;
		}
};

int main ()
{
	cout<<"---------Enter_Details--------\n";
	
	bank b1;
	
	b1.inputb();
	b1.displayb();
	b1.inputm();
	b1.displaym();
	
	return 0;
}

