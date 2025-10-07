#include<iostream>
#include<string>
using namespace std;

int CheckPalindrome(string S1)
{
	int low = 0, high = S1.length() - 1;
	int flag = 1; //Assume it is a palindrome
	while(low < high) 
	{	
		if(S1[low] != S1[high])
		{
		flag = 0;
		break;
		}
		low++;
		high--;
	}
	
	return(flag);
}

int main(void)
{
	int flag = -1;
	string Str1 = "abcba";
	flag = CheckPalindrome(Str1);
	
	if (flag == 1)
	{
		cout<<"string is a palindrome";
	}
	
	else
	{
		cout<<"string is not a palindrome";
	}
}
