#include<iostream>
using namespace std;

class Base
{
	protected :
		int BaseI;
	
	public :
		virtual	void Accept(void)
		{
			cout<<"enter base I : ";
			cin>>BaseI;	
		}	
		
		virtual void Display(void)
		{
			cout<<"Base I : "<<BaseI<<endl;
		}
};

class Derived1 : public Base
{
	protected :
		int DerivedI;
		
	public : 
		virtual void Accept(void)
		{
			cout<<"enter DerivedI : ";
			cin>>DerivedI;
		}
		
		virtual void Display(void)
		{
			cout<<"Derived I : "<< DerivedI<<endl;
		}
};

int main(void)
{
	Base *Ptr1;
	Base B1;
	Derived1 D1;
	
	Ptr1 = &B1;
	Ptr1 -> Accept();
	Ptr1 -> Display();
	
	
	Ptr1 = &D1;
	Ptr1 -> Accept();
	Ptr1 -> Display();
}
