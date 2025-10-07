#include<iostream>
using namespace std;

int Add (int a, int b)
{
	return(a+b);

}

int main(void)
{
	int x, y, z;
	
	cout<<"enter value of the two numbers :";
	cin>> x>> y;
	
	z = Add(x, y);
	//z = Add(x,);
	cout<<"addition is"<<z<<endl;
}
