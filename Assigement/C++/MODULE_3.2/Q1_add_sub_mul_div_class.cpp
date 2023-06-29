// WAP to create simple calculator using class

#include<iostream>
using namespace std;

class cal{
	
	private:
		float num1,num2;
	
	public:
		void sum()
		{
			cout<<"Enter first number : ";
			cin>>num1;
			cout<<"Enter second number : ";
			cin>>num2;
			
			cout<<endl<<"Addition is : "<<num1+num2<<endl;
		}
		
		void sub()
		{
			cout<<"Enter first number : ";
			cin>>num1;
			cout<<"Enter second number : ";
			cin>>num2;
			
			cout<<endl<<" Subtraction is : "<<num1-num2<<endl;
		}
		
		void mul()
		{
			cout<<"Enter first number : ";
			cin>>num1;
			cout<<"Enter second number : ";
			cin>>num2;
			
			cout<<endl<<"Multiplication is : "<<num1*num2<<endl;
		}
		
		void div()
		{
			cout<<"Enter first number : ";
			cin>>num1;
			cout<<"Enter second number : ";
			cin>>num2;
			
			cout<<endl<<"Division is : "<<num1/num2<<endl;
		}
};

int main()
{
	cal c1;
	
	cout<<"----------Addition----------\n";
	c1.sum();
	cout<<"\n--------Subtraction--------"<<endl;
	c1.sub();
	cout<<"\n------Multiplication--------"<<endl;
	c1.mul();
	cout<<"\n---------Division-----------"<<endl;
	c1.div();
	
	return 0;
}

