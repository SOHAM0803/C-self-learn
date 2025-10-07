#include<iostream>
#include<cstring>
using namespace std;

int main(void)
{
	string Str1 = "ABC DEF";
	string Str2 = "Abc DEF";
	string Str3 = Str1 + Str2;
	int Cmp1, Cmp2;
	
	Str1.swap(Str2);
	cout<<"after swap : "<<endl;
	cout<<"str1 : "<<Str1<<endl;
	cout<<"str1 : "<<Str2<<endl;
}
