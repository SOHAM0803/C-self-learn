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
		rows = r ;
		cols = c;
		int i;
		
		ptr = new int *[rows];
		for(i = 0; i < rows; i++)
			ptr[i] = new int [cols];	
	}	
	
	
	friend istream & operator >>(istream &input, Matrix M1)
	{
		int r, c;
		int **ptr1 = M1.ptr;
		int x;
		
		for(r = 0; r < M1.rows; r++)
		{
			for(c = 0; c < M1.cols; c++)
			{
				cout << "enter element ["<<r<<c<<"]";
				//input>>ptr1[r][c];
				input>> x;
				ptr1[r][c] = x;
			}
		}
		return(input);
	}
	
	friend ostream & operator <<(ostream &output, Matrix M1)
	{
		int r, c;
		int **ptr1 = M1.ptr;
		
		
		for(r = 0; r < M1.rows; r++)
		{
			for(c = 0; c < M1.cols; c++)
			{
				output << ptr1[r][c]<< " \t";
			}
			output<<endl;
		}
		return(output);
	}
	
	~Matrix(void)
	{
		int r;
		
		for(r = 0; r < rows; r++)
		{
			delete []ptr[r];
		}
	}
	/*
	void Display(void)
	{
		int r, c;
		int **ptr1 = ptr;
		
		for(r = 0; r < rows; r++)
		{
			for(c = 0; c < cols; c++)
			{
				cout<< ptr1[r][c]<<"\t";
			}
			cout<<endl;
		}
	}
	*/
};

int main(void)
{
	Matrix M1(2,3);
	cout<<"enter M1 \n";
	cin>>M1;
	cout<<"you have entered : \n";
	cout<<M1;
	//M1.Display();
	
}
