#include<iostream>
using namespace std;

class Rectangle;

class Square
{
	private :
		int side;
	public:
		Square(int s)
		{
			side = s;
		}	
				
	
	float GetArea(void)
	{
		return(side*side);
	}

	friend void MaxArea(Square S1, Rectangle R1);
};

class Rectangle
{
	int length;
	int breadth;
	
public :
	Rectangle(int l, int b)
	{
		length = l;
		breadth = b;
	}
	
	float GetArea(void)
	{
		return(length*breadth);
	}
	
	friend void MaxArea(Square S1, Rectangle R1);
	
};

void MaxArea(Square S1, Rectangle R1)
{
	if(S1.side * S1.side > R1.length * R1.breadth)
		cout<<"square has greater area" ;
	else 
		cout<<"rectangle has greater area";

}

int main(void)
{
	Square S1(5);
	Rectangle R1(3, 4);
	MaxArea(S1,R1);
}
