#include<iostream>
#include<cstring>
using namespace std;

int main (void)
{
	string Str1 = "ABC";
	string Str2 = "XYZ";
	string Str3 = Str1 + Str2;
	int Cmp;
	
	cout<<"str3 : "<<Str3<<endl;
	
	if (Str1 != Str2)
		cout<<"Str1 not equal to Str2"<<"\n";
	else
		cout<<"Str1 = Str2\n";
		
	if (Str1 > Str2)
		cout<<"Str1 greater than Str2" <<endl;
	
	else
		cout<<"str2 is greater the than str1"<<endl;
		
	/*
	Cmp = Str1.compare(Str2);
	cout<<"Cmp = "<<Cmp<<endl;
	if(Cmp == 0)
		cout<<"Str1 is equal to Str2"<<endl;
		
	if (Cmp > 0)
		cout<<"Str1 greater than Str2"<<endl;
		
	else 
		cout<<"Str2 greater than Str1"<<endl;
	*/	
}
