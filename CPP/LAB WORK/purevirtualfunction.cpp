#include<iostream>
using namespace std;

/*
	Pure Virtual Function :
				- They are declared by using virtual keyword. and 
				- do not contain any body.
	
	imp note : If you declare a virtual function, then it is compulsory
	    	   to implement that method in that class which is inheriting it.
				
*/

class Demo{
	public:
		
		void f1()
		{
			cout<<"\nNon Pure Virtual Function in class Demo";
		}
		
		virtual void f2(); // Pure Virtual Function.
};

class Sample : public Demo{
	public:
		
		void f3()
		{
			cout<<"\nNon Pure Virtual Function in class Sample";
		}
		
		void f2()
		{
			cout<<"\nPure Virtual Function implemented in class Sample";
		}
};





int main()
{
	Sample obj1;
	obj1.f1();
	obj1.f2();
	obj1.f3();
	return 0;
}