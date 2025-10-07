#include<iostream>
#include<cstring>
using namespace std;

int main (void)
{
	string s1 = "ABC";
	
	char str2[20];
	
	cout<<"at begin : "<< s1 <<endl;
	cout <<"enter the first string : ";
	gets(str2);
	
	cout<<"storing str2 in s1 : \n";
	s1 = str2;
	
	cout<<s1;
	cout"enter s1 : ";
	getline(cin, s1);
	cout<<s1;
}
