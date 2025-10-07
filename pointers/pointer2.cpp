#include<iostream>
using namespace std;

int main(void)
{
	int *p = new int; //p = (int *)malloc (sizeof(int))
	float *q = new float;
	
	//int arr[25]
	
	cout <<"address of p" << p << " and its contents are " << *p << endl;
	cout <<"address of q" << q << " and its contents are " << *q << endl;
	*p = 25;
	*q = 50.2;
	
	cout << " p points to "<< p << "q points to " << q <<endl;
	cout << "int is " << *p << "float is "<< *q << endl;
	delete p;
	cout << "p points to" << p << "q points to "<< q << endl;	
	cout <<"int is" << *p << " float is " << *q << endl;
	
}
