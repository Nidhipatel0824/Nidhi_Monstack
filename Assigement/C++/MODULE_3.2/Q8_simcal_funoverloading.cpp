/*Write a program to Mathematic operation like Addition, Subtraction,
Multiplication, Division Of two number using different parameters and
Function Overloading*/


#include<iostream>
using namespace std;

class cal{
	public:
		
		void add(float a,float b)
		{
			
			cout<<"-----Addition-------\n";
			cout<<"Enter any number : ";
			cin>>a;
	
			cout<<"Enter any number: ";
			cin>>b;
	
			cout<<"\nAddition is : "<<a+b<<endl;
		}
		
		void add(double a,double b,double c)
		{
			cout<<"\n-----Subtraction,-------\n";
			cout<<"Enter any number : ";
			cin>>a;
	
			cout<<"Enter any number : ";
			cin>>b;
			
			cout<<"\nSubtraction is : "<<a-b<<endl;
		}
		
		void add(double a,double b,double c,double d)
		{
			cout<<"\n------Multiplication-------\n";
			cout<<"Enter any number : ";
			cin>>a;
	
			cout<<"Enter any number: ";
			cin>>b;
			
			cout<<"\nMultiplication is : "<<a*b<<endl;
		}
		
		void add(double a,double b,double c,double d,double e)
		{
			cout<<"\n------Division-------\n";
			cout<<"Enter any number: ";
			cin>>a;
	
			cout<<"Enter any number: ";
			cin>>b;
			
			cout<<"\nDivision is : "<<a/b;
		}
};
		
int main()
{

	float n1,n2;
	
	cal c1;
	
	
	c1.add(n1,n2);
	
	c1.add(n1,n2,0.0);
	
	c1.add(n1,n2,1.0,1.0);
	
	c1.add(n1,n2,1.0,1.0,1.0);

	
	return 0;
}
