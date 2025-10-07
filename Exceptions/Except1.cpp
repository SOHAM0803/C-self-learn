//using standard exceptions
#include<iostream>
#include<exception>
using namespace std;

class MyException : public exception
{
	virtual const char* what() const throw()
	{
		return "my exception happened";
	}
};



int main(void)
{
	MyException MyEx;
	try
	{
		throw MyEx;
	}
	catch (exception &e)
	{
		cout<<e.what()<<"\n";
	}
}
