#include<iostream>
using namespace std;

int main(void)
{
	int n;
	cout<<"enter number :";
	cin>>n;
	
	for(int cnt = 1; cnt <= 10; cnt++)
	{
		cout<< n << " x "<< cnt <<"=" << n*cnt <<endl; 
	}
	return (0);
}
