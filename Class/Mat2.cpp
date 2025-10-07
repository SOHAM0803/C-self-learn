#include<iostream>
using namespace std;

class Matrix
{
	int **ptr;
	int rows;
	int cols;
public :
	Matrix(int r, int c)
	{
		rows = r;
		cols = c;
		int i;
		
		ptr = new int *[rows];
		for ( i = 0; i < rows; i++)
			ptr[i] = new int[cols];
			
	}
	
	void Accept(void)
	{
		int r, c;
		int **ptr1 = ptr;
		for(r = 0; r < rows; r++)
		{
			for(c = 0; c < cols; c++)
			{
				cout<<"enter element ["<<r<<c<<"]";
				cin>>ptr1[r][c];
			}
		}
	}
	
	void Display (void)
	{
		int r, c;
		int **ptr1 = ptr;
		for(r = 0; r < rows; r++)
		{
			for(c = 0; c < cols; c++)
			{
				cout<< ptr1[r][c]<<"\t";
				//ptr1++;
			}
			cout<<endl;
		}
	}
	
	~Matrix(void)
	{
		int r;
		for(r = 0; r < rows; r++)
		{
			delete []ptr[r];
			//delete []ptr;		
		}
	}
	
	Matrix Add (Matrix M2)
	{
		Matrix M3 (rows, cols);
		int **ptr1 = ptr;
		int **ptr2 = M2.ptr;
		int **ptr3 = M3.ptr;
		int r, c;
		
		for(r = 0; r < rows; r++)
		{
			for(c = 0; c < cols; c++)
			{
				ptr3[r][c] = ptr1[r][c] + ptr2[r][c];
			}
		}
		
		return (M3);
	}

};

int main(void)
{
	Matrix M1(2,2);
	
	cout<<"enter M1 \n";
	M1.Accept();
	M1.Display();

	cout<<"enter M2 \n";
	Matrix M2(2,2);
	M2.Accept();
	M2.Display();

	//Matrix M3(2,2);
	Matrix M3 = M1.Add(M2);
	
	cout<<"after addition \n";
	M3.Display();	
}

