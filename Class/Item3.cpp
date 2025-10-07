#include<iostream>
using namespace std;

class Item
{
	private :
		string ItemName;
		float Price;
		
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
	Item I2("Laptop", 60000);
	Item I3("Chair", 10000);
	
	cout<< I1.GetCount()<<endl;
	cout<< I2.GetCount()<<endl;
	cout<< I3.GetCount()<<endl;
	
	cout<< Item :: GetCount();
}

