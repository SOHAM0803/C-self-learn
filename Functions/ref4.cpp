#include<iostream>
using namespace std;

//write a program to accept two numbers from the usersand assign 9999 to the maximum of the two

int &GetMax(int &x, int &y)
{
	if (x>y)
		return(x);
	else
		return(y);
}

int main(void)
{
	int x, y;
	
	cout<<"enter the two numbers : ";
	cin>>x>>y;
	cout<<"the numbers are x = "<<x<<" y = "<<y << endl;
	
	GetMax(x,y) = 9999;
	//int max = GetMax(x,y);
	cout<<"\nthe numbers now are x = "<<x<<" y = "<<y<<endl;
	//cout<<"max = "<<max<<endl;
}
