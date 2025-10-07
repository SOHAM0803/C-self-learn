#include<iostream>
#include<string>

using namespace std;

int Add(int x, int y);
double Add(double x, double y);
//char * Add(char *str1, char *str2);

//def Add(x, y)
int Add(int x, int y)
{
	cout<< "\n I am in integer overload x = "<<x<<" y = "<<y;
	return(x+y);
	
}

double Add(double x, double y)
{
	cout<< "\n I am in float overload x = "<<x<<" y = "<<y;
	return(x+y);
	
}

string Add(string str1, string str2)
{ 
	string str3 ="";
	str3 = str3 + " ";
	str3 = str1 + str2;
	return(str3);
	
}

int main(void)
{
	cout<< "\n integer addition "<< Add(23, 24)<< endl;
	cout<< "\n double addition "<< Add(7.9, 5.6)<< endl;
	cout<< "\n string addition "<< Add("soham ", "lagad")<< endl;
			
}
