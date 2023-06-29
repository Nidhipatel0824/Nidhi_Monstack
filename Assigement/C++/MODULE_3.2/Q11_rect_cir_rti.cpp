/*Write a program to calculate the area of circle, rectangle and triangle using
Function Overloading
 Rectangle: Area * breadth
 Triangle: ½ *Area* breadth
 Circle: Pi * Area *Area*/
 
 
 
 
#include<iostream>
using namespace std; 

class base {
public:
	int cho,b,h,r,l,w;
	float area;

void getdata()
{
cout<<"=====Menu====="<<endl;
cout<<"1.Rectangle"<<endl;
cout<<"2.Triangle"<<endl;
cout<<"3.Circle"<<endl;

cout<<"Select your choice : ";
cin>>cho;
}
};
class letdata : 
public base
{
public:
void sdata()
{
	if (cho==1)
	{
		cout<<"Enter Length : ";
		cin>>l;
		cout<<"Enter Breadth : ";
		cin>>w;
		area=l*w;
	    cout<<"Area of Rectangle : "<<area;
	}
	else if (cho==2)
	{
		cout<<"Enter Base : ";
		cin>>b;
		cout<<"Enter Breadth : ";
		cin>>h;
		area=(b*h)/2;
		cout<<"Area of Triangle : "<<area;
	}
	else if (cho==3)
	{
		cout<<"Enter radius of circle : ";
		cin>>r;
		area=3.14*r*r;
	    cout<<"Area of Circle : "<<area;
	}
	else
	{
			cout<<"Invalid output!!";
	}	
  }
};

int main()
{
  letdata d;
  d.getdata();
  d.sdata();
}

