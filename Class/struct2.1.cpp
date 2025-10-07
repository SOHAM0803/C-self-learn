#include<iostream>
using namespace std;

struct Complex
{
	int real;
	int imag;
};

void Get(struct Complex &C1)
{
	
	cout<<"enter the real part :";
	cin>>C1.real;
	
	cout<<"enter the imaginary part : ";
	cin>>C1.imag;
	
}

void DisplayComplex(struct Complex C1)
{
	cout<< C1.real<< showpos<< " "<< C1.imag<<"i\n";
}

int main(void)
{
	struct Complex C1;
	
	Get(C1);
 DisplayComplex(C1);

		
}
