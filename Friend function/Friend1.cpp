#include<iostream>
using namespace std;

class Square
{
	private :
		int side;
	
	public:
		Square(int s)
		{
			side = s;
		}	
		
		friend float GetArea(Square S1);
		
};

	
float GetArea(Square S1)
{
	return(S1.side*S1.side);
}

int main(void)
{
	Square S1(5);
	//S1.GetArea() not needed
	cout<<"Area : "<<GetArea(S1);
}
