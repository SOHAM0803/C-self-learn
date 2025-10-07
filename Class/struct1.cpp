#include<iostream>
using namespace std;

struct Complex
{
	int real;
	int imag;
};

int main(void)
{
	struct Complex C1;
	
	cout<<"enter the real part :";
	cin>>C1.real;
	
	cout<<"enter the imaginary part :";
	cin>>C1.imag;
	
	cout<<"you have entered :";
	cout<<C1.real<< showpos<<" "<< C1.imag<<"i\n";
}
