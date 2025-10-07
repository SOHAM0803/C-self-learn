#include<iostream>
using namespace std;

//protected data members and member functions are visible
//to its own class and also to the data member and member functions
//of derived class

class Base
{
	protected :
		int a;
	public :
		int b;
		void SetAB();
		/*
		int GetA()
		{
			return(a);
		}
	
		*/
		
		void ShowA();
		void SetA (int x)
		{
			a = x;			
		}
};

class Derived : public Base
{
	private :
		int c;
	public :
		void SetAB()
		{
			a = 5;
			//SetA(5);
			b = 10;
		}
	
	int GetA()
	{
		return(a);
	}
	
	void ShowA()
	{
		cout<<"a = "<<GetA()<< endl;
	}
	
	void Display()
	{
		cout<<"a = "<<GetA()<<" b = "<<b<<endl;
	}
};


class Derived2 : public Derived
{
	private :
		int d;
	public :
		void SetAB()
		{
			a = 15;
			//SetA(5);
			b = 100;
		}
	
	int GetA()
	{
		return(a);
	}
	
	void ShowA()
	{
		cout<<"a = "<<GetA()<< endl;
	}
	
	void Display()
	{
		cout<<"a = "<<GetA()<<" b = "<<b<<endl;
	}
};


int main(void)
{
	Derived D1;
	D1.SetAB();
	cout<<"D1 a = "<< D1.GetA()<<endl;
	D1.ShowA();
	D1.Display();
	
	Derived D2;
	D2.SetAB();
	cout<<"D2 a = "<< D2.GetA()<<endl;
	D2.ShowA();
	D2.Display();
	
}
