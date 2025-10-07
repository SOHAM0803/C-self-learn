#include<iostream>
using namespace std;

int main()
{
int i,j,n,count=0,k=0;
cout<<"Enter N";
cin>>n;

for(i=1;i<=n;i++)
	{
		count=k;
		for(j=1;j<=i;j++)
		{
			if(i%2==0)
			{
				cout<<count+i;
				count = count - 1;
				if(j!=i)
					cout<<"*";
				k++;
			}
			
			else
			{
				count=count+1;
				cout<<count;
				if(j!=i)
					cout<<"*";
				k++;
			}
		}
		cout<<"\n";

	}
return 0;
}
