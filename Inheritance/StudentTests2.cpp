#include<iostream>
#include<string>
using namespace std;

#define MAX 2

class Student
{
	private :
		string SName;
		int RollNo;
	
	public :
		void Get()
		{
			cout<<"enter name : ";
			cin>>SName; 
			cout<<"enter roll no : ";
			cin>>RollNo;
		}
		
		void Display()
		{
			cout<<RollNo<<endl;
			cout<<SName<<endl;
		}
			
};

class Test : public Student
{
	protected :
		float marks[MAX];	

	public :
		void Get(void)
		{
			//GetStudent();
			cout<<" enter marks "<<endl;
			int cnt;
			for(cnt = 0; cnt < MAX; cnt++)
			{
				cout<<"enter marks "<<cnt<<" : ";
				cin>> marks[cnt];
			}
		}
		
		void Display (void)
		{
			//Display();
			int cnt;
			for (cnt = 0 ; cnt < MAX; cnt++)
			{
				cout<< marks[cnt]<<"\t";
			}
		}
};

class Result : public Test
{
	float total;
	
	public :
		void Display (void)
		{
			Student :: Display();
			Test :: Display ();
			int cnt;
			total = 0;
			
			for(cnt = 0 ; cnt < MAX; cnt++)
			{
				total += marks[cnt];
			}
			cout <<"so total marks "<<total << endl;
		}

};

int main (void)
{
	Result Result1;
	
	Result1.Student :: Get();
	Result1.Test :: Get();
	
	Result1.Display();
}
