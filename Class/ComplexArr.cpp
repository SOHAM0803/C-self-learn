#include<iostream>
using namespace std;

//2 + 3i
//-9 + 9i


class Complex
{
	int real;
	int imag;

public :
	void Get(void);
	void Display(void);
};

	void Complex :: Get(void)
	{
		//temp();
		cout<< " enter the real part : ";
		cin>>real;
		
		cout<<"enter the imaginary part : ";
		cin>>imag;
	}
	
	void Complex :: Display(void)
	{
		//showpositive
		cout<< showpos<<real<<" "<<imag<<"i\n";
	}

int main(void)
{
	Complex Arr[MAX];
	//C1.real = 50;
	//Get(&C1)
	for(cnt = 0; cnt < MAX; cnt++)
	{
	Arr[cnt].Get();
	}
	//Display(C1)
	for(cnt = 0; cnt < MAX; cnt++)
	{
	Arr[cnt].Display();
	}
}
