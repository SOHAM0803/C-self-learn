#include<iostream>
using namespace std;

int BinarySearch(int Arr[], int num, int n);
int BinarySearch(float Arr[], float num, int n);

int main(void)
{
	int Arr1[] = {5,7,10,15,35,40};
	int x;
	x = BinarySearch(Arr1, 35, 6);
	cout<<"index of number found is "<<x;
	return (0);
}

int BinarySearch(int Arr[], int num, int n)
{
	int low = 0, high = n-1, mid = -1, flag = -1;
	
	while(low < high)
	{
		mid = (low + high)/2;
		if(Arr[mid] == num)
		{
			flag =mid;
			break;
		}
		
		if(Arr[mid] < num)
		{
			low = mid + 1;
		}
		
		else
		{
			high = mid - 1;
		}
	}
	
	return (flag);
}

