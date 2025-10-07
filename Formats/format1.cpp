#include<iostream>
int main(void)
{
	static double values[] = {1.23, 25.26, 653.654, 4358.224};
	
	for(int cnt = 0; cnt < 4 ; cnt++)
		std :: cout<< values[cnt] << std :: endl;
}
