#include<iostream>
using namespace std;

int Add (int a, int b = 0)
{
	cout<<"\n a = "<<a<<" b = "<<b<<endl;
	return(a+b);

}

int main(void)
{
	int x, y, z;
	
	cout<<"enter value of the two numbers :";
	cin>> x>> y;
	
	z = Add(x, y);
	cout<<"addition is "<<z<<endl;

	z = Add(x);
	cout<<"addition is "<<z<<endl;
}
