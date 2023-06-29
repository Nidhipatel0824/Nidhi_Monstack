//Write a program to find the multiplication values and the cubic values using inline function.

#include<iostream>
using namespace std;

class cal{
	
	public:
		
		inline float multi(float a,float b)
		{
			return(a*b);
		}
		
		inline double cube(float a)
		{
			return(a*a*a);
		}
};

int main()
{
	float a,b;
	
	cal c;
	
	cout<<"------Multiplication & Cube value--------"<<endl;
	
	cout<<"Enter 1st value : ";
	cin>>a;
	
	cout<<"Enter 2nd value : "<<endl;
	cin>>b;
	
	cout<<"First value is :"<<a<<endl;
	cout<<"Second value is :"<<b<<endl;
	
	cout<<"\nMultiplication is : "<<c.multi(a,b);
	
	cout<<"\n\nCube Value of "<<a<<" is : "<<c.cube(a);
	cout<<"\nCube Value of "<<b<<" is : "<<c.cube(b);
	
	return 0;
}





