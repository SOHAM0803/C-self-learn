#include<iostream>
using namespace std;

#define MAX  3

struct Complex
{
	int real;
	int imag;
};
	
	void Get(struct complex &C1)
	{
		//temp();
		cout<< " enter the real part : ";
		cin>>real;
		
		cout<<"enter the imaginary part : ";
		cin>>imag;
	}
	
	void Display(struct complex C1)
	{
		//showpositive
		cout<< showpos<<C1.real<<" "<<C1.imag<<"i\n";
	}


int main(void)
{
	struct Complex arr[3];
	int cnt;
	
	for(cnt = 0; cnt < MAX; cnt++)
	{
		cout<<"enter you next number :"<<endl;
		Get(arr[cnt]);

	}
	
	cout<< "you have entered :";
		for(cnt = 0; cnt < MAX; cnt++)
		{
			Display (arr[cnt]);
		}
}
