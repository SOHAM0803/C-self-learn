#include<iostream>
using namespace std;

class rational
{
	int numerator;
	int denominator;
	
	public :
	void Get(void);
	void Display(void);
	rational Add(rational R1);
	rational Greater(rational R2);
	rational()
	{
		int numerator = 0;

		int denominator = 1;	
	} 	
	
	rational(int n, int d)
	{
		numerator = n;
		denominator = d;
	}
};

	void rational :: Get(void)
	{
		//temp();
		cout<< " enter the numerator : ";
		cin>>numerator;
		
		cout<<"enter the denominator : ";
		cin>>denominator;
	}
	
	void rational :: Display(void)
	{
		//showpositive
		cout<< numerator<<"/"<<denominator<<"\n";
	}
	
	rational rational :: Add(rational R2)
	{
		rational R3;
		R3.numerator = (numerator*R2.denominator)+(denominator*R2.numerator);
		R3.denominator = (denominator*R2.denominator);
		return(R3);
	}
	
	rational &rational :: Greater(rational &R2)
	{
		float F1, F2;
		int flag = 0;
		F1 = (numerator/denominator);
		F2 = (R2.numerator/R2.denominator);
	
		if(F1 > F2)
		{
			return(*this);
		}
		
		else
		{
		return(F2);
		}
	}
	

int main(void)
{
	rational R1(1,2), R2(3,4), R3;
	
	R3 = R1.Add(R2);
	
	DisplayGreater(R1, R2);	

}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
