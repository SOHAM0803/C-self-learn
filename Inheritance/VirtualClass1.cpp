#include<iostream>
#include<cstring>
using namespace std;

class Student
{
	protected :
		int RollNo;
		AcceptStudent(int r)
		{
			RollNo = r;
		}
		
		void Display(void)
		{
			cout<<"Roll No : "<<RollNo<<endl;
		}
		
};

class Test : virtual public student 
{
	protected :
		float Test1, Test2;
		
	public :
		void AcceptTest(void)
		{
			cout<<"enter marks for test 1 : ";
			cin>>Test1;
			cout<<"enter marks for test 2 : ";
			cin>>Test2;
		}
		
		void Display(void)
		{
			cout<<"Test 1 : "<<Test1<<endl;
			cout<<"Test 2 : "<<Test2<<endl;	
		}	
};

class Sports : public virtual Student
{
	protected :
		float Score;
		
	public :
		AcceptSports(float S)
		{
			Score = S;
		}
		
		void Display(void)
		{
			cout<<"The sports score is : "<<Score<<endl; 
		}
};

class Result : public Test public Sports
{
	protected :
		float Total;
	
	public :
		void AcceptResult(void)
		{
			int r;
			cout<<"enter roll no : ";
			cin>>r;
			AcceptStudent(r);
			AcceptTest();
			float S;
			cout<<"enter sports score : ";
			cin>>S;
			Score = S;
			//AcceptSports();
			Total = Test1 + Test2 + Score;	
		}	
		
		void Display(void)
		{
			//Student.Display();
			//Test.Display();
			cout<<"Total score "<<Total<<endl;
		}
};


int main(void)
{
	Result R1;
	R1.AcceptResult();
	R1.Display();
}
