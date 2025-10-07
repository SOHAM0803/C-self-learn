#include<iostream>
using namespace std;


// a function with default arguments, it can be called with
// two arguments or 3 arguments or 4 arguments.

int sum(int x, int y, int z = 0, int w = 0)
{
	return(x + y + z + w);
}

/*drier program to test above function*/

int main()
{
	cout<< sum(10, 15)<<endl;
	cout<< sum(10, 15, 25)<<endl;
	cout<< sum(10, 15, 25, 35)<<endl;
	
}
