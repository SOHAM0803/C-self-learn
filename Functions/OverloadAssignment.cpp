#include<iostream>
using namespace std;

int Area(int x, int y);
float Area(float a, float b);

int Area(int x, int y)
{
	return (x*y);
}

float Area(float a, float b)
{
	cout<<"i am in float"<<a<<endl<<b<<endl<<a*b<<endl;
	
	return (a*b);
}

int main(void)
{
	int x = 5,y = 4;
	float r = 7.0,s = 8.0;
	
	//cout<<"area of integer rectangle is "<< Area(x,y)<<endl;
	cout<<r<<endl<<s;
	cout<<"area of float rectangle is "<< Area(r,s)<<endl;
	
}
