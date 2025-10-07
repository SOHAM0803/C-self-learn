#include<iostream>
using namespace std;

void Test (int x)
{
	try
	{
		if (x == 1)
			throw (x);
		else if (x == 0)
			throw (char(x));
		else if (x == -1)
			throw (1.0);
		cout<<"end of try catch block"<<endl;
	}
	
	catch(char ch)
	{
		cerr<<"caught character";
	}
	catch(int a)
	{
		
	}
	catch (double d)
	{
		
	}
}

int main(void)
{
	int a, b;
	
	a = 5;
	b = 5;
	
	int x = a - b;
	
	try 
	{
		if(x != 0)
		{
			cout<<"result : "<< a/x<<"\n";
		}
		else
		{
			throw(x);
		}
	}
	catch(int i)
	{
		cout<<"exception caught "<<x<<"\n";
	}
	
	cout<<"bye";
}
