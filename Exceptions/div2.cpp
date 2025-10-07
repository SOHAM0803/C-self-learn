#include<iostream>
using namespace std;

int main(void)
{
	int numerator, denominator;
	int result  = -1;
	
	cout<<"enter the numerator and denominator : ";
	cin>>numerator>>denominator;
	
	//this is where error can occur
	//place this in try block
	try
	{
		if (denomiator == 0 )
			throw(denominator);
		result = numerator/denominator;
		cout<<"result is : "<<result;	
	}
	catch (int Ex1)
	{
		cout<<"divide by zero \n";
	}
	
	cout<<"end of program \n";
}#include<iostream>
using namespace std;

int main(void)
{
	int numerator, denominator;
	int result  = -1;
	
	cout<<"enter the numerator and denominator : ";
	cin>>numerator>>denominator;
	
	//this is where error can occur
	//place this in try block
	try
	{
		if (denomiator == 0 )
			throw("division by zero");
		else if (numerator < 0 || denominator < 0)
			throw(-1);
		result = numerator/denominator;
		cout<<"result is : "<<result;	
	}
	catch (const char *Msg)
	{
		cout<<"divide by zero \n";
	}
	
	catch (int Ex2)
	{
		if numerator < 0
			cout<<"negative numerator entered\n";
			
		if denominator < 0
			cout<<"negative denominator entered\n";
	}
	cout<<"end of program \n";
}
