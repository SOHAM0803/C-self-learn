#include<iostream>
#include<cstring>
using namespace std;

/*
class string 
{
	private : 
		char *str;
		
	public :
	string(char *str1)
	{
		str = new char[strlen(str1) + 1];
	}
};
*/

int main(void)
{
	string s1 = "ABC";
	
	cout<<"at begin : "<<s1<<endl;
	cout<<" enter your string :";
	cin>>s1;
	cout<<s1;
}
