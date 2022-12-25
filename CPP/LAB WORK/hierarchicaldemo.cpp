#include <iostream>
using namespace std;


class Side{
	protected:
		int l;
	public:	
		void getVal(int x/* method */) //function.
		{
			l = x;
		}
	
};

class Square : public Side{
	public:
		
		int sq() //function
		{
			return l*l;
		}
};

class Cube : public Side{
	public:
		int cu() //function.
		{
			return l*l*l;
		}
};

int main()
{
	Square a;
	a.getVal(8);
	cout<<"\nsqure : "<<a.sq();//function calling.
	
	Cube c;
	c.getVal(3);
	cout<<"\nCube is : "<<c.cu();
	
	return 0;
}





