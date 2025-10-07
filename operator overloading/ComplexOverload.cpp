#include<iostream>
#include<cmath>
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

	Complex operator + (Complex C2)
	{
		Complex C3;
		C3.real = real + C2.real;
		C3.imag = imag + C2.imag;
	
		return(C3);
	}
	
	
	Complex operator - (Complex C2)
	{
		Complex C3;
		C3.real = real - C2.real;
		C3.imag = imag - C2.imag;
	
		return(C3);
	}
	
	int operator == (Complex C2)
	{
		int flag = 0;
		
		if(real == C2.real && imag == C2.imag)
			flag = 1;

	
		return(flag);			
	}
	/*
	int ModComplex()
	{
		int Mod = 0;
		
		Mod = sqrt((C2.real*C2.real)+(C2.imag*C2.imag));
		
		return (Mod);
	}
	
	
	int operator > (Complex C2)
	{
		int flag = 0;
		
		if(ModComplex(*this) > ModComplex(C2))
			flag = 1;
	
		
	return(flag);
	}
	*/
	
	
	Complex operator += (int n)
	{
		Complex C3;
		C3.real = real + n;
		C3.imag = imag + n;
	
		return(C3);
	}
	
};


int main(void)
{
	Complex C1, C2, C3;
	
	C1.Get();
	C1.Display();
	
	C2.Get();
	C2.Display();
	
	C3 = C1 + C2;
	
	C3.Display();
	
	C3 = C1 += 3;
	/*
	C3.Display();
	int x = C1.ModComplex();
	cout<<"\n\n"<<x;
	*/
}
