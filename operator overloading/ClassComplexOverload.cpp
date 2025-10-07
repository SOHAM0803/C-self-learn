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
	
	Complex(int r, int i)
	{
		real = r;
		imag = i;
	}
	
	friend istream & operator >> (istream &input, Complex &C1)
	{
		cout<< " enter the real part : ";
		input>>C1.real;
		
		cout<<"enter the imaginary part : ";
		input>>C1.imag;
		
		return(input);
	}
	
	
	friend ostream & operator << (ostream &output, Complex C1)
	{
		output<<showpos<<C1.real<<" "<<C1.imag<<"i\n";
	
		return(output);
	}

	
};

int main(void)
{
	Complex C1;
	
	cin>> C1;
	cout<< C1;
}
