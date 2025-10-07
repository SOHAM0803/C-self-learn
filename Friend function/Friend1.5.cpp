#include<iostream>
using namespace std;

class Square
{
	private :
		int side;
		friend float GetArea(Square S1);

	public:
		Square(int s)
		{
			side = s;
		}	
				
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
