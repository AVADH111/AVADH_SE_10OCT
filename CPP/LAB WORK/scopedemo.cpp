

#include<iostream>
using namespace std;

class scopedemo{
	public:
		void func();
		void func2()
            
{
	cout<<"this is func1 ";//func2
}


	};
	
	void scopedemo::func()
	{
		cout<<"avadh 111 class\t.";//func1
		scopedemo::func2();
	}
	
	int main()
	{
		scopedemo aa;
		aa.func();
	return 0;
	}