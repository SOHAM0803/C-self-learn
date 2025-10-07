#include<iostream>
#include<cstring>
using namespace std;

int main(void)
{
	string s1 ;
	
	cout<<"size : "<<s1.size()<<endl;
	cout<<"length : "<<s1.length()<<endl;
	cout<<"capacity : "<<s1.capacity()<<endl;

	s1 = "abc def";
	
	cout<<"size : "<<s1.size()<<endl;
	cout<<"length : "<<s1.length()<<endl;
	cout<<"capacity : "<<s1.capacity()<<endl;
	cout<<"max size : "<<s1.max_size()<<endl;
}

