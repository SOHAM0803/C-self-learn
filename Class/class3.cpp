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
	
	Complex(void)
	{
		real = 0;
		imag = 0;
	}
	
	Complex(int r, int i)
	{
		real = r;
		imag = i;
	}


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
	Complex C1;
	C1.Display();
	Complex C2(2,-3);
	C2.Display();
}
