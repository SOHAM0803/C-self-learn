#include<iostream>
using namespace std;

class Matrix
{
	int *ptr;
	int rows;
	int cols;
	
public :
	 Matrix(int r, int c)
	 {
	 	rows = r;
	 	cols = c;
	 	//ptr = (int *)malloc(r*c)
	 	ptr = new int [r*c];
	 	cout<<"memorry allocated at : "<<ptr<<"\n";
	 }
	 
	void Accept (void)
	 {
	 	int r, c;
	 	int *ptr1 = ptr;
	 	for(r = 0; r < rows; r++)
	 	{
	 		for(c = 0; c < cols; c++)
			 {	
				cout<<"enter element ["<<r<<c<<"]";
				cin>>*ptr1;
				ptr1++;
			 }	
		}
	}
	 	
	void Display(void)
	{
		int r, c;
	 	int *ptr1 = ptr;
	 	for(r = 0; r < rows; r++)
	 	{
	 		for(c = 0; c < cols; c++)
			 {	
				cout<<*ptr1<<"\t";
			 	ptr1++;
			 }	
			 cout<<endl;
		}
	 	
	}

	~Matrix(void)
	{
		//delete[size] pointer;
		cout<<"\n int destructor "<< ptr<<endl;
		delete [] ptr;
	}
	
	Matrix Add(Matrix M2)
	{
		int r;
		int c;
		Matrix M3(rows, cols);
		int *ptr1 = ptr;
		int *ptr2 = M2.ptr;
		int *ptr3 = M3.ptr;
		for(r = 0; r < rows; r++)
	 	{
	 		for(c = 0; c < cols; c++)
			 {	
				*ptr3 = *ptr1 + *ptr2;
			 	ptr1++;
			 	ptr2++;
			 	ptr3++;
			 }		
		}
		 return(M3);
	}
	
	Matrix Transpose(void)
	{
		int r; 
		int c;
		
		int *ptr1 = ptr[r][c];
			for(r = 0; r < rows; r++)
	 	{
	 		for(c = 0; c < cols; c++)
			 {	
			 	TPS[r][c] = ptr1[c][r];
			 }		
		}

	}
	 
};


int main(void)
{
	Matrix M1(2,2);
	Matrix M2(2,2);
	Matrix M3(2,2);
	cout<<"Enter M1\n";
	M1.Accept();
	M1.Display();
	
	M2.Accept();
	M2.Display();
	
	M3 = M1.Add(M2);
	
	M3.Display();
	
}
