#include<iostream>
using namespace std;

class Time24
{
	int hour;
	int min;
	int sec;

public : 

	//void Get(void);
	//void Display(void);
	
	Time24 (void)
	{
		hour = 0;
		min = 0;
		sec = 0;
	}
	Time24 (int h, int m, int s)
	{
		hour = h;
		min = m;
		sec = s;
	}
	
	void Get(void)
	{
		int flag  = 0;
		
		while(!flag)
		{
		
			cout<<"enter hourtime : "<<endl;
			cin>>hour;
			if ( hour < 0 or hour > 24)
			{
				cout << "Invalid hours enter again ";
				continue;
			}
		
			cout<<"enter minutes : "<<endl;
			cin>>min;
			if(min < 0 or min > 60)
			{
				cout << "Invalid mins enter again ";
				continue;
			}
		
			cout<<"enter seconds : "<<endl;
			cin>>sec;
			if(sec < 0 or sec > 60)
			{
				cout << "Invalid secs enter again ";
				continue;
			}
			flag = 1;
		}
	}

	void Display(void)
	
	{
		cout<<hour<<":"<<min<<":"<<sec;
	}
};
	
	
	
int main(void)
{
	Time24 T1;
	
	T1.Get();
	T1.Display();
}
