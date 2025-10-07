#include <iostream>
using namespace std;
#define MAX_SIZE	10

template <class T>
class Equation
{
private:
	T a ;
	T b ;
	T c;

public:
	
	Equation(T a1 , T b1 , T c1)
	{
		a = a1;
		b = b1;
		c = c1;
	}
	void Quadratic(void)
	{
	}
	
	T determinant(void);
	void Display (void)
	{
		
		cout << "the equation is \n";
		cout << a << "x2" <<"\t";
		cout << b << "x" << "\t";
		cout << c << endl;
	}
	
	void Roots (void)
	{
		T r, r1, r2;
		T d = determinant () ;
		if ( d >= 0)
		{
			r = sqrt (d) ;
			r1 = (-1*b + r)/(2 * a);
			r2 = (-1*b - r)/(2 * a);
			cout << "Root 1 : " << r1 << endl;
			cout << "Root 2 : " << r2 << endl;
		}
		else if (d == 0)
		{
			r1 = r2 = -b/(2 * a) ;
			cout << "Roots are equal \n";
			cout << r1 << endl;	
		}
		else
		{
			T real, complex;
			real = -b/(2 * a) ;
			complex = sqrt (-d)/(2 * a);
			r1 = real - complex;
			r2 = real + complex;
			cout << "Root 1 : " << real <<
			"+" << complex << "i"<< endl;
			cout << "Root 2 : " << real <<
			"-" << complex << "i"<< endl;
		}
	}
} ;

template <class T>
T Equation<T>::determinant(void)
{
	return(b*b - 4*a*c);
}


