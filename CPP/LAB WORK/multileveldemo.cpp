#include <iostream>
using namespace std;

class A{
	public:
		int a;
		void getA()
		{
			cout<<"\nEnter A : ";
			cin>>a;
		}
		
		void putA()
		{
			cout<<"A = "<<a;
		}
};

class B : public A{
	public:
		int b;
		void getB()
		{
			cout<<"\nEnter B : ";
			cin>>b;
		}
		
		void putB()
		{
			cout<<"B = "<<b;
		}
};

class C : public B{
	public:
		int c;
		void getC()
		{
			cout<<"\nEnter C : ";
			cin>>c;
		}
		
		void putC()
		{
			cout<<"C = "<<c;
		}
};

int main()
{
	C obj1;
	obj1.getA();
	obj1.getB();
	obj1.getC();
	
	obj1.putA();
	obj1.putB();
	obj1.putC();
	
	
	
	return 0;	
}














