#include<iostream>
#include<cstring>

using namespace std;


class staff
{
	protected :
		int Code;
		string name;
		
	public :
		virtual void employee(int C, string s)
		{
			name = s;
			Code = C;
		}
};

class teacher : public staff
{
	string subject;
	int exp;
	
	public : 
	
	teacher (string Name, int code, string Subject, int Exp)
	{
		//staff.employee(Code, Name);
		name = Name;
		Code = code;
		subject = Subject;
		exp = Exp;
	}
	
	friend ostream &operator << (ostream &Out, teacher &T1)
	{
		Out<<"Name : "<<T1.name<<endl;
		Out<<"Code : "<<T1.Code<<endl;
		Out<<"Subject : "<<T1.subject<<endl;
		Out<<"Experience : "<<T1.exp<<endl;
	
		return(Out);
	}
};

class officer : public staff
{
	string dept;
	int grade;
	public :
		officer(string Name, int code, string Dept, int g)
		{
			name = Name;
			Code = code;
			dept = Dept;
			grade = g;
		}
		
		friend ostream & operator << (ostream &Out, officer &Of1)
		{
			Out<<"Name : "<<Of1.name<<endl;
			Out<<"Code : "<<Of1.Code<<endl;
			Out<<"Department : "<<Of1.dept<<endl;
			Out<<"Grade : "<<Of1.grade<<endl;
			
			return(Out);
		}
};

class admin: public staff
{
	protected :
		string dept;
		int exp;
		
	public :
		virtual void administrator()
		{
		}
};

class regAdmin : public admin
{
	int salary;
	
	public :
		regAdmin(string Name, int code, int exp, string Dept, int Salary)
		{
			name = Name;
		}
};

class casualAdmin : public admin
{
	int dailywage;	
};

int main()
{
	teacher t1("abc", 1, "C++", 16);
	cout<< t1;
	//t3 = t1 + t2;
	officer Officer1("def", 2, "finance", 1);
	cout<<Officer1;
	
	regAdmin RegAdmin1("ghi", 3, 10, "Accounts", 50000);
	
	return 0;
}
