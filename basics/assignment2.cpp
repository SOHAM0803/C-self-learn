#include<iostream>
using namespace std;

int power(int a, int b = 2)
{
	int cnt, pwr = 1;
	
	for(cnt = 1; cnt <= b; cnt++)
	{
		pwr *= a;
		
	}
	return(pwr);
}
/*
int main(void)
{
	cout<<power(8, 3)<<endl;
	cout<<power(5)<<endl;
}
*/

void swap( int &a, int &b)
{
	int temp;
	temp = b;
	b = a;
	a = temp;
	
}

int main(void)
{
	int x, y;
	cout<<"enter two numbers : "<<endl;
	cin>>x>>y;
	
	cout<<"before swap x = "<< x<< " y = "<< y;
	swap(x, y);
	cout<<"after swap x = "<< x<< " y = "<< y;
	
}




