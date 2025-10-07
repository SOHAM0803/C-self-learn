#include<iostream>

int main(void)
{
	double values[] = {1.23, 35.36, 653.7, 4358.224};
	int cnt;
	
	//std :: cout.width(10);
	for(cnt = 0; cnt < 4; cnt++)
	{
		std :: cout.width(10);
		std :: cout<< values[cnt] << std :: endl;
	}
}
