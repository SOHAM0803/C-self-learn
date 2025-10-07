#include<iostream>
using namespace std;

int main(void)
{
	
	cout <<"\n array is \n";
	int *arr = new int[5];
	int cnt;
	
	
	cout <<"array is pointing to "<< arr << endl;
	for(cnt = 0; cnt < 5; cnt++)
	{
		arr[cnt] = cnt;
		cout << arr[cnt] << "\t";

	}
	
	delete[] arr;
	cout <<"array is pointing to "<< arr << endl;
	for(cnt = 0; cnt < 5; cnt++)
	{
		cout << arr[cnt] << "/t";
	}
	
	int n, cnt; 
	cout << "\n how many integers you want to add to the array?";
	cin>> n;
	int *arr = new int[n];
	cout << "\n array is pointing to "<< arr << endl;
	for (cnt = 0; cnt < n; cnt++)
	{
		arr[cnt] = cnt;
		cout << arr[cnt] << "\t";
	}
	
	delete [] arr;
	// delete[n] arr;
	cout <<"\n array is pointing to " << arr << endl;
}
