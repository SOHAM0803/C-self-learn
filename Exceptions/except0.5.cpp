//using standard exceptions
#include<iostream>
#include<exception>
using namespace std;
/*
class MyException : public exception
{
	virtual const char* what() const
}

*/

int main(void)
{
	exception e1;
	try
	{
		throw e1;
	}
	catch (exception &e)
	{
		cout<<e.what()<<"\n";
	}
}
