#include<iostream>
using namespace std;

//forward declaration
class XYZ;

class ABC
{
	private :
		int x;
	public :
		ABC(int x1)
		{
			x = x1;
		}
		
		void Display(void)
		{
			cout<<"x = "<<x<<endl;
		}
		
		friend void Exchange (ABC &abc1, XYZ &xyz1);
};

class XYZ
{
	int y;
	
public :
	XYZ (int y1)
	{
		y = y1;
	}
	
	void Display(void)
	{
		cout<<"y = "<<y<<endl;
	}
	
	friend void Exchange(ABC &abc1, XYZ &xyz1);
	
};;

//swap(int *ptr1, int *ptr2)
//swap(&x, &y)

void Exchange(ABC &abc1, XYZ &xyz)
{
	int tmp;
	tmp = abc1.x;
	abc1.x = xyz1.y;
	xyz1.y = tmp;
}

int main(void)
{
	ABC abc1(5);
	XYZ xyz1(10);
	
	cout<<"before exchange "<< endl;
	abc1.Display();
	xyz1.Display();
	
	Exchange(abc1, xyz1);
	cout<<"after exchange "<<endl;
	abc1.Display();
	xyz1.Display();
}
