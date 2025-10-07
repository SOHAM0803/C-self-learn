#include<iostream>
using namespace std;

struct Complex
{
	int real;
	int imag;
};

struct Complex Get(void)
{
	struct Complex C1;
	cout<<"enter the real part :";
	cin>>C1.real;
	
	cout<<"enter the imaginary part : ";
	cin>>C1.imag;
	
	return(C1);
}

void DisplayComplex(struct Complex C1)
{
	cout<< C1.real<< showpos<< " "<< C1.imag<<"i\n";
}

int main(void)
{
	struct Complex C1;
	
	C1 = Get();
	DisplayComplex(C1);

		
}
