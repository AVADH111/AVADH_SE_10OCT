#include<iostream>
using namespace std;
class number{
	public://privte, protected.
		int a=44;
};

int main()
{
	number obj1;
    cout<<obj1.a;
	
	return 0;
}