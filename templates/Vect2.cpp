#include<iostream>
using namespace std;

//if we want to define a vector class with the data type of the
//vector as the parameter we have to use template

/*
Template <class T>
class <class name>
{
	//class member specifications
	//with anonymous type T
	//where ever applicable
};

*/
template <class T>
class Vector
{
	T *V;
	int size;
	
	public :
		Vector(int S)
		{
			V = new T [size = S];
			
			for(int cnt = 0; cnt < size; cnt++)
			{
				V[cnt] = 0;
			}
		}
		
		Vector(T *Arr, int S)
		{
			V = new T [size = S];
			
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
	//Vector <data type> V1(dimension);
	
	Vector <int> V1(5);
	cout<<"V1 is : "<<endl;
	V1.Display();
	
	int Arr1[] = {10, 20, 30};
	Vector <int> V2(Arr1, 3);
	cout<<"V2 is "<<endl;
	V2.Display();
	
	float Arr2[] = {10.1, 20.2, 30.3};
	Vector <float> V3(Arr2, 3);
	cout<<"V3 is "<<endl;
	V3.Display();
}


