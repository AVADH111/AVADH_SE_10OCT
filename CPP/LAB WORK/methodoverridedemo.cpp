#include<iostream>
using namespace std;
/*
	Method Overriding  : It has
						- Same return type.
						- Same Function Name.
						- Same Arguments.

*/

class A
{
	public:
		void show()
		{
			cout<<"\nShow From A";
		}
	
};
class B : public A
{
	public:
		void show()
		{
			A::show();
			cout<<"\nShow From B";
		}
	
};
class C : public B
{
	public:
		void show()
		{
			B::show();
			cout<<"\nShow From C";
		}	
};

int main()
{
	
	C obj3;
	obj3.show();
	return 0;
}










