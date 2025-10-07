#include<iostream>
#include<string>
using namespace std;


void swap(int &x, int &y);
void swap(float &a, float &b);
void swap(string str1, string str2);

void swap(int &x, int &y)
{
	int temp;
	temp = y;
	y = x;
	x = temp;
}

void swap(float &a, float &b)
{
	float temp;
	temp = b;
	b = a;
	a = temp;
}

void swap(string str1, string str2)
{
	string t (str1);
	str1 = str2;
	str2 = t;
}

int main(void)
{
	int x = 5, y = 4;
	float r = 2.0, s = 6.0;
	string str1 = " soham", str2 = " lagad";
	
	cout<<"before swapping integers are "<<x<<" and "<<y<<endl;
	cout<<"before swapping floats are "<<r<<" and "<<s<<endl;
	cout<<"before swapping strings are "<<str1<<" and "<<str2<<endl;
	
	swap(x, y);
	swap(r, s);
	
	swap(str1, str2);
	
	cout<<"after swapping integers are "<<x<<" and "<<y<<endl;
	cout<<"after swapping floats are "<<r<<" and "<<s<<endl;
	cout<<"after swapping strings are "<<str1<<" and "<<str2<<endl;
	
}
