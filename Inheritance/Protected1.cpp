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

int main(void)
{
	Derived D1;
	D1.SetAB();
	cout<<"a = "<< D1.GetA()<<endl;
	D1.ShowA();
	D1.Display();
	
}
