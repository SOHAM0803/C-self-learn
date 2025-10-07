#include<iostream>
using namespace std;


class Base
{
private : 
	int a; //this will not be inherited
public :
	int b; //this is public, ready for inheritance
	void SetAB()
	{
		cout<<"in base set AB"<<endl;
	}
	int GetA()
	{
		return(a);
	}
	
	void ShowA();
	void SetA(int x)
	{
		a = x;
	}
	
};
/*
when a class is publicly derived from the base class
1. all the public members of the base class become public members of derived class
2. the private members of the base class are not accessible to the derived class
3. yet all the members private and public are inherited by the derived class
*/
class Derived : public Base
{
private :
	int c;
public :
	void SetAB()
	{
		cout<<"in derived SetAB"<<endl;
		//a = 5
		SetA(5);
		b = 10;
	}		
	
	/*
	void GetA()
	{
		//return (a);	
	}
	*/
	
	void ShowA()
	{
		cout<<"a = "<<GetA()<<endl;
	}
	
	void Display()
	{
		cout<<"a = "<<GetA()<<"b = "<<b<<"c = "<<c<<endl;
	}
};

int main(void)
{
	Base B1;
	B1.SetAB();
	
	
	Derived D1;
	
	D1.SetAB();
	/*
	D1.GetA();
	D1.ShowA();
	D1.Display();
	*/
}
