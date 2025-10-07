#include<iostream>
using namespace std;

class rational
{
	int numerator;
	int denominator;
	
	public :
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


	void Get(void)
	{
		//temp();
		cout<< " enter the numerator : ";
		cin>>numerator;
		
		cout<<"enter the denominator : ";
		cin>>denominator;
	}
	
	void Display(void)
	{
		//showpositive
		cout<< numerator<<"/"<<denominator<<"\n";
	}
	
	rational operator + (rational R2)
	{
		rational R3;
		R3.numerator = (numerator*R2.denominator)+(denominator*R2.numerator);
		R3.denominator = (denominator*R2.denominator);
		return(R3);
	}

	rational operator - (rational R2)
	{
		rational R3;
		R3.numerator = (numerator*R2.denominator)-(denominator*R2.numerator);
		R3.denominator = (denominator*R2.denominator);
		return(R3);
	}
	
	rational operator += (int n)
	{
		rational R3;
		R3.numerator += n*denominator;
		return(R3);
	}
	
	int operator >= (rational &R2)
	{
		float F1, F2;
		int flag = 0;
		F1 = (float(numerator)/float(denominator));
		F2 = (float(R2.numerator)/float(R2.denominator));
	
		if(F1 > F2)
		{
			flag = 1;
		}
		
		return(flag);
	}
	
	int operator <= (rational &R2)
	{
		float F1, F2;
		int flag = 0;
		F1 = (float(numerator)/float(denominator));
		F2 = (float(R2.numerator)/float(R2.denominator));
	
		if(F1 < F2)
		{
			flag = 1;
		}
	
		return(flag);
	}


 rational operator ++ (int)
 {
 	
	rational R2(numerator,denominator);
	
	numerator += denominator;
	return(R2);  
 }	
 
 
 rational operator ++ ()
 {
 	
	numerator += denominator;
 	rational R2(numerator,denominator);
	
	return(R2);  
 }	
	
	/*
	operators that cannot be overloaded
	sizeof
	typeid
	scope resolution(:)
	class members access operators (. (dot operators, *, ->)
	ternary or conditional(? :)
	*/
	
	/*
	operators that cannot be overloaded
	unary
	binary
	special like subscript [], dereferencing -> */
};

int main(void)
{
	rational R1(1,2), R2(3,4), R3;
	
	R3 = R1 + R2;
	R3.Display();
	
	int flag;
	
	flag = R1 >= R2;
	
	
 	cout<<"\n"<<flag;
 	
	flag = R1 <= R2;

 	cout<<"\n"<<flag<<"\n";
 	
 	rational R4;
 	R4 = R1++;
 	cout<<"after post increment R4 :  \n";
 	R4.Display();
 	
	cout<<"after post increment R1 :  \n";
 	R1.Display();
 	
 	
 	R4 = ++R2;
 	cout<<"after pre increment R4 :  \n";
 	R4.Display();
 	
	cout<<"after pre increment R1 :  \n";
 	R2.Display();
}
