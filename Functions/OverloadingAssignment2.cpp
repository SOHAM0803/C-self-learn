#include<iostream>

using namespace std;

//int power(int a, int b = 2);
//float power(float x, int y = 2);
/*
int power(int a, int b = 2)
{
	int pow = 1, cnt = 1;
	for( cnt = 1; cnt <= b; cnt++)
	{
		pow *= a;
	}
	return(pow);
}
*/


float power(float x, int y = 2)
{
	float pow = 1.0;
	int cnt = 1;
	
	cout << "x = " << x << endl;
	for( cnt = 1; cnt <= y; cnt++)
	{
		pow *= x;
	}
	return(pow);
}


int main(void)
{
	int a = 3, b = 5, y = 5;
	float x = 2.0; 
	//cout<<"power of integer "<<x<<" is"<<power(a,b);
	cout<<"power of float "<<x<<" is"<<power(x,y);
	 
}
