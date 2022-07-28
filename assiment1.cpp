#include<iostream>
using namespace std;
class invent1{
	
	int code;
	int items;
	float price;
	
	public:
		
		invent1(int x, int y, float z)
		{
			code   = x;
			items  = y;
			price  = z;
		}
		void display()
		{
			cout<<"Product detail invent1-type"<<endl;
			cout<<"Code  : "<<code<<endl;
			cout<<"Items : "<<items<<endl;
			cout<<"Price : "<<price<<endl<<endl;
		}
		int getcode()
		{
			return code;
		}
		float gettotal()
		{
			return (items*price);
		}
		operator float()
		{
			return items*price;
	    }
};

class invent2{
	
	int code;
	float total;
	
	public:
		invent2(int x=0 ,float y=0)
		{
			code  = x;
			total = y;
		}
		invent2(invent1 obj1)
		{
			code  =obj1.getcode();
			total =obj1.gettotal();
		}
		void display()
		{
			cout<<"Product detail invent2-type"<<endl;
			cout<<"Code  : "<<code<<endl;
			cout<<"Total : "<<total<<endl<<endl;
		}
};

int main()
{
	float total_price;
	invent1  obj1(200,5,140);
	invent2  obj2;
	
	total_price=obj1;
	obj2=obj1;
	
	obj1.display();
	cout<<"Total price : "<<total_price<<endl<<endl;
	obj2.display();
	
}
