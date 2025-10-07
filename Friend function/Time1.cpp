#include<iostream>
#include<string>
using namespace std;

class Time12; 
   
class Time24
{
private :
	int hour;
	int min;
	int sec;
	
public : 
	
	Time24(int h, int m, int s)
	{
		hour = h;
		min = m;
		sec = s;
	}
	
	void Display(void)
	{
		cout<<hour<<":"<<min<<":"<<sec<< endl;
	}
	
	friend Time12;	
};

class Time12
{
	private:
		int hour;
		int min;
		int sec;
		string AmPm;
		
	public :
		Time12(int h, int m, int s, string S1)
		{
			hour = h;
			min = m;
			sec = s;
			AmPm = S1;
		}
		
	void Display(void)
	{
		cout <<hour<<":"<<min<<":"<<sec<<""<<AmPm<<endl;
	}
	
	//To get a time in Time24 which is stored in Time12
	//as we are using the constructoe Time24 as an operator
	//it has to return an object in Time12 format
	
	operator Time24()
	{
		//AmPm and hour are data members
		//of the current object in Time12format
		
		if(AmPm =="pm")
			hour = hour + 12;
			
		Time24 T24(hour,min,sec);
			return(T24);
	}
};


int main (void)
{
	Time12 T12(1, 30, 30, "pm");
	T12.Display();
	
	Time24 T24(T12);
	T24.Display();
}
