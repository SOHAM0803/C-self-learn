#include<iostream>
using namespace std;

class Item
{
	private :
		string ItemName;
		float Price;
		
		
	public :		
		static int Count;
		
	public :
		Item()
		{
			Count++;
		}
		
		Item(string IName, float IPrice)
		{
			ItemName = IName;
			Price = IPrice;
			Count++;
		}
		
		int GetCount()
		{
			return(Count);
		}
		
		
};

int Item :: Count;

int main(void)
{
	Item I1("Table", 2000);
	cout<< I1.GetCount()<<endl;
	Item I2("Laptop", 60000);
	cout<< I2.GetCount()<<endl;
	Item I3("Chair", 10000);
	cout<< I3.GetCount()<<endl;
	
	cout<< Item :: Count;
}

