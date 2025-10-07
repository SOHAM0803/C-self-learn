#include<iostream>
using namespace std;

int SumNum(int a, int b);
int SumNum(int a, int b, int c);
int SumNum(int a, int b, int c, int d);

int main()
{
	cout<<SumNum(1, 2)<<endl;
	cout<<SumNum(1, 2, 3)<<endl;
	cout<<SumNum(1, 2, 3, 4)<<endl;
	
	return 0;
}

int SumNum(int a, int b)
{
	return(a+b);	
}

int SumNum(int a, int b, int c)
{
	return(a+b+c);	
}

int SumNum(int a, int b, int c, int d)
{
	return(a+b+c+d);	
}
