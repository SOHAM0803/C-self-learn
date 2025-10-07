//#include <iostream>
#include <cmath>
/*#include "G:\\Manjusha\\OOPs\\Templates\\Quadratic1.h"*/
#include "Quadratic1.h"
using namespace std;

int main (void)
{
	Equation <int>Eq1 (1, -5, 6);
	Eq1.Display();
	Eq1.Roots();
	
	Equation <int>Eq2 (1, -10, 25);
	Eq2.Display();
	Eq2.Roots();
	
	Equation <float>Eq3 (1.0, 1.0, 1.0);
	Eq3.Display();
	Eq3.Roots();
}
