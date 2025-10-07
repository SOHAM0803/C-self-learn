#include<iostream>
#include<cstring>
using namespace std;

class Subject
{
	protected :
		string SubjectName;
	
	public :
		Subject(string SName)
		{
			cout<<"in subject\n";
			SubjectName = SName;
		}
	
	void Display(void)
	{
		cout<<"subject "<<SubjectName<<endl;	
	}
};

class Person
{
	protected :
		string PName;
		
	public :
		Person(string P)
		{
			cout<<"in person\n";
			PName = P;
		}
		
		void Display(void)
		{
			cout<<"i am "<<PName<<endl;
		}
		
};

//private derivation of person
//constructor of person will be first
//executed

class Teacher : public Subject, Person
{
	private :
		string ClassName;
	
	public :
		Teacher (string SName, string PName, string CName) : Subject (SName), Person(PName)
		{
			cout<<"in teacher "<<endl;
			ClassName = CName;
		}
		
		void Display(void)
		{
			Person :: Display();
			Subject :: Display();
			cout<<"for class "<<ClassName<<endl;
		}
};

int main(void)
{
	Teacher T1("C++", "Manjusha","S.E.");
	T1.Display();
}
