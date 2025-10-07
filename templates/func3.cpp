#include<iostream>
using namespace std;

//int Add(int x, int y)
//float Add(float f1, float f2)
template <class A>
A Add(A x, A y)
{
	return (x + y);
}

//this is overloading a template function
//with a template function
//this is done for a specific data type

template <class A>
A Add(char x, A y)
{
	return(x + y - 64);
}

int main(void)
{
	cout<<"Integer Addition : "<< Add(5, 6)<<endl;
	cout<<"float addition : "<< Add(5.5, 6.2)<<endl;
	cout<<"integer addition : "<<Add('A', 23)<<endl;
}
