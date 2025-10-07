#include<iostream>
using namespace std;
#define MAX 5

class Array
{
	int *ptr;
	int n;
	
public :
	Array(int n1)
	{
		n = n1;
		ptr = new int [n];
		//cout<<"ptr = "<<ptr<<endl;
		int cnt;
		int *ptr1 = ptr;
		
		for(cnt = 0; cnt < n; cnt++)
			ptr1[cnt] = 100;
		/*	
		for(cnt = 0; cnt < n; cnt++)
			cout<<cnt<<" "<<ptr1[cnt]<<endl;
		*/	
	}
	
	Array (int *ptr2, int n1)
	{
		n = n1;
		ptr = new int[n];
		//cout<<"ptr = "<<ptr << endl;
		int cnt;
		int *ptr1 = ptr;
		
		for(cnt = 0; cnt < n; cnt++)
			ptr1[cnt] = ptr2[cnt];
	}
	
	void Display(void)
	{
		int cnt;
		int *ptr1 = ptr;
		for(cnt = 0; cnt < n; cnt++)
			cout<<"	"<<ptr1[cnt];
		cout<<"\n";
	}
	~Array()
	{
		delete[] ptr;
	}
	
	void RotateLeft (void)
	{
		int cnt;
		int *ptr1 = ptr;
		int temp = ptr1[0]; 
		for(cnt = 0 ; cnt < n-1 ; cnt++)
		{
			ptr1[cnt] = ptr1[cnt+1];
		}
		ptr1[n-1] = temp;
	}
	
	
	void RotateRight (void)
	{
		int cnt;
		int *ptr1 = ptr;
		int temp = ptr1[n-1]; 
		for(cnt = n-1 ; cnt > 0 ; cnt--)
		{
			ptr1[cnt] = ptr1[cnt-1];
		}
		ptr1[0] = temp;
	}
	
	int & operator [] (int index)
	{
		if ((index < 0) || (index > n))
		{
			cout << "Index out of bounds"<<endl;
			exit(0);
		}
		return(ptr[index]);
	}
};


int main(void)
{
	Array Arr1(MAX);
	
	int arr1[] = {10, 20, 30, 40, 50};
	Array Arr2(arr1, MAX);
	/*
	cout<<"before rotate left : ";
	Arr2.Display();
	Arr2.RotateLeft();
	cout<<"after rotate left : ";
	Arr2.Display();
	cout<<"after rotate right again : ";
	Arr2.RotateRight();
	Arr2.Display();
	*/
	
	
}
