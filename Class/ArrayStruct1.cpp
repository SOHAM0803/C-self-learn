#include<iostream>
using namespace std;
#define MAX 3

struct Complex
{
	int real;
	int imag;	
}; 


	void Get(struct Complex &C1)
	{
		//temp();
		cout<< " enter the real part : ";
		cin>>C1.real;
		
		cout<<"enter the imaginary part : ";
		cin>>C1.imag;
	}
	
	void Display(struct Complex C1)
	{
		//showpositive
		cout<< showpos<<C1.real<<" "<<C1.imag<<"i\n";
	}

struct Complex GetArray(struct Complex arr[], int n)
{

	int cnt;
	
	for(cnt = 0; cnt < n; cnt++)
	{
		cout<<"enter you next number :"<<endl;
		Get(arr[cnt]);
	}
}

void Display(struct Complex arr[], int n)
{
		int cnt;
		for(cnt = 0; cnt < MAX; cnt++)
		{
			Display (arr[cnt]);
		}

}


int main(void)
{
	struct Complex Arr[MAX];
	
	GetArray(Arr, MAX);
	
	Display(Arr, MAX);
	
}
