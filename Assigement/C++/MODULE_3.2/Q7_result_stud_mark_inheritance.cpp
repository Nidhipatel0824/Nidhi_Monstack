/*Assume that the test results of a batch of students are stored in three different
classes. Class Students are storing the roll number. Class Test stores the marks
obtained in two subjects and class result contains the total marks obtained in
the test. The class result can inherit the details of the marks obtained in the
test and roll number of students. (Multilevel Inheritance)*/


#include<iostream>
using namespace std;

class student{
	private:
		int rn;
		
	public:
		void inputS()
		{
			cout<<"Enter Your Roll Number : ";
			cin>>rn;
		}
		void displayS()
		{
			cout<<"Your Roll Number : "<<rn<<endl;
		}
};

class test:public student{
	protected:
		int s1,s2;
		
	public:
		void inputT()
		{
			cout<<"Enter 1st Subject Marks : ";
			cin>>s1;
			cout<<"Enter 2nd Subject Marks : ";
			cin>>s2;
		}
		
		void displayT()
		{
			cout<<"Your 1st Subject Marks is : "<<s1<<endl;
			cout<<"Your 2nd Subject Marks is : "<<s2<<endl;
		}
};

class result:public test{
	protected:
		int total;
		
	public:
		void displayR()
		{
			cout<<"\n----------Your Details-----------\n";
			displayS();
			displayT();
			
			total = s1 + s2;
			
			cout<<"Total Marks of Two Subject is : "<<total;
		}
		
		
		
};
int main()
{
	
	result r;
	
	cout<<"----------Enter_Details-----------\n";
	r.inputS();
	r.inputT();
	r.displayR();
	
	return 0;
}

