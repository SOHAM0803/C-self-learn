#include	<iostream>

using namespace std;


int main(void)
{
	int *iPtr;
	int x = 10;
	
	
	iPtr = &x;
	cout << "iPtr = " << iPtr << "address of x " << &x << endl;
	cout << "with iPtr" << *iPtr << "with x " << x << "\n";
	*iPtr = 5;
	cout << " with iPtr " << x << "\n";

	
	int a = 2, b = 3;
	// here we cannot change what ptr1 was pointing to ir to the memory location 
	// this is read only andcannot even change contents
	
	int * const iPtr = &a;
	cout << "iPtr at " << iPtr1 << " and its contents" << *iPtr1 << "\n";
	*iPtr = 10 ;
	cout << "iPtr at " << iPtr1 << "and its contents " << *iPtr1 << "\n";
	
	/*
	iPtr1 = &b;
	cout << "constant iPtr1 " << *iPtr1 << "\n";
	*/
	
	
	int const *iPtr2 = &b;
	cout << "iPtr2 "<< iPtr2 << "constant iPtr2 " << *iPtr2 << "\n";
	iPtr2 = &a;
	cout << "iPtr2 "<< iPtr2 << "constant iPtr2 "<< *iPtr2 << "\n";
	//you can change the place iPtr2 points to but not its contents
	//whereas you can the the data stored in the variable that the ptr is pointing to;
	//*iPtr2 = 8;
	a = 8;
	cout <<"iPtr2 "<< iPtr2 <<" constant iPtr2 "<< *iPtr2 <<"\n";

}
