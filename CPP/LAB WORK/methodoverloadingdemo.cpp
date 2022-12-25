#include<iostream>
using namespace std;
/*
	Method Overloading : different return type, same function name and 
	                     different parameters.                  
	                     

*/



class MO{
	public:
		
		void demo()
		{
			int a = 10;
			cout<<"A = "<<a;
		}
		
		void demo(int a)
		{
			if(a%2==0)
			{
				cout<<"\nIt is Even";
			}
			else
			{
				cout<<"\nIt is Odd.";
			}
		}
		
		
		int demo(int a,int b)
		{
			return a+b;
		}
		
};


int main()
{
	MO obj1;
	obj1.demo();
	obj1.demo(50);
	cout<<"\n\nAddition : "<<obj1.demo(54,68);
	return 0;
}

