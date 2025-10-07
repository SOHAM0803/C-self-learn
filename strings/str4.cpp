#include<iostream>
#include<cstring>
using namespace std;

int main (void)
{
	string s1 = "ABC";
	string s2 = "DEF";
	
	string s3= s1 + s2;
	cout<<"s3 "<<s3<<endl;
	string s4 = s1 + " ::: ";
	// + s2;
	cout<<" s4 "<<s4<<endl;
	
	string s5 = "ABCDEFGHI";
	s5.insert(4, "soham");
	//s5.insert(4, s2);
	cout<<"s5 = "<<s5<<endl;	
}
