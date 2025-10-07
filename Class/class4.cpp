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
	Complex Add(Complex C2);
	Complex Substract(Complex C1);
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
	
	Complex Complex :: Add(Complex C2)
	{
		Complex C3;
		
		C3.real = real + C2.real;
		C3.imag = imag + C2.imag;
		
		return(C3);
	}
	
	Complex Complex :: Substract(Complex C1)
	{
		Complex C3;
		
		C3.real = real - C1.real;
		C3.imag = imag - C1.imag;
		
		return(C3);
	}
int main(void)
{
	Complex C1(15,15), C2(20,20), C3, C4;
	C1.Display();
	C2.Display();
	C3 = C1.Add(C2);
	
	cout<<"after adding the two complex numbers : ";
	C3.Display();
	C4 = C2.Substract(C1);
	C4.Display();

}
