#include<iostream>
using namespace std;

int main(void)
{
	float total = 10;
	float &total1 = total; //reference variable alias
	//they both are the same memory
	
	cout<< "total is"<< total << " address of total "<< &total << endl;
	cout<< "total1 is"<< total1 << " address of total "<< &total1 << endl;
	
}
