#include<iostream>
using namespace std;

class Vector
{
	int *V;
	int size;
	
	public :
		Vector(int S)
		{
			V = new int [size = S];
			
			for(int cnt = 0; cnt < size; cnt++)
			{
				V[cnt] = 0;
			}
		}
		
		Vector(int *Arr, int S)
		{
			V = new int [size = S];
			
			for(int cnt = 0; cnt < size; cnt++)
			{
				V[cnt] = Arr[cnt];
			}
		}
		
		void Display(void)
		{
			for(int cnt = 0; cnt < size; cnt++)
			{
				cout<<V[cnt]<<endl;
			}
		}
		
		//int operator * (Vector V2)
		Vector operator + (Vector V2)
		{
	
			Vector V3(V, size);
			
			for(int cnt = 0; cnt < size; cnt++)
				V3.V[cnt] += V2.V[cnt];
			
			return(V3);
		}
};

int main(void)
{
	Vector V1(5);
	V1.Display();
}


