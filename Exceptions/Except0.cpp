//user defined exceptions
#include<iostream>

using namespace std;

class MyException
{
	
};

int main(void)
{
	MyException MyEx;
	try
	{
		throw MyEx;
	}
	catch(MyException ME)
	{
		cout<<"thrown exception of class "<<"\n";
	}
	cout<<"bye \n";
	
}
