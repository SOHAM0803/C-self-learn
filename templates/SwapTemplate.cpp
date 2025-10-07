#include<iostream>
using namespace std;

template <class A>
void swap(A &x, A &y)
{
	A temp;
	temp = x;
	x = y;
	y = temp;
	
}

int main(void)
{
	float f1 = 5.5;
	float f2 = 6.6;
	int x = 1;
	int y = 2;
	
	cout<<"before swap x and y : "<< x << y<<endl;
	swap(x,y);
	cout<<"after swap x and y : "<< x << y << endl;
	
	cout<<"before swap f1 and f2 : "<< f1 << f2<<endl;
	swap(f1,f2);
	cout<<"after swap f1 and f2 : "<< f1 << f2 << endl;

	
	
}

