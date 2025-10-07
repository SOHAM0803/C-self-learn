#include<iostream>
using namespace std;

class Complex
{
	int real;
	int imag;
	
public :
	Complex(void)
	{
		real = 0;
		imag = 0;
	
	}
	
	void Get(void)
	{
		//temp();
		cout<< " enter the real part : ";
		cin>>real;
		
		cout<<"enter the imaginary part : ";
		cin>>imag;
	}
	
	void Display(void)
	{
		//showpositive
		cout<< showpos<<real<<" "<<imag<<"i\n";
	}

	
};

int main(void)
{
	Complex C1;
	C1.Get();
	C1.Display();
	
	Complex C2 = C1;
	C2.Display();
}
