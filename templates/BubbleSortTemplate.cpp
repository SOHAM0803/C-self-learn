#include<iostream>
using namespace std;

template <class A>
void sort(A arr[], int y)
{
	int i, j;
	int temp;
	
	for(i = 0; i < y-1 ;i++)
	{
		for(j = i+1; j < y; j++)
		{
			if(arr[i]>arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

template <class A>
void Display(A arr[], int a)
{
	int i;
	for(i = 0; i < a; i++)
		{
			cout<<arr[i]<<"	";
		}
		cout<<endl;
}


int main(void)
{
	int Arr[] = {1,4,7,32,90,3};
	int n = sizeof(Arr)/sizeof(Arr[0]);

		
	cout<<"before sort : "<<endl;
	Display(Arr, n);
	sort(Arr, n);
	
	cout<<"after sort : "<<endl;
	Display(Arr,n);

	float Arr2[] = {1.1, 7.7, 0.9, 2.3,43.2};
	n = sizeof(Arr2)/sizeof(Arr2[0]);
	cout<<"before sort : "<<endl;
	Display(Arr2, n);
	sort(Arr2, n);
	
	cout<<"after sort : "<<endl;
	Display(Arr2,n);
}











