#include<iostream>
using namespace std;

class staticdemo{
	public:
	static int objcount;
		
		staticdemo()
		{
			cout<<"\n\nthis is defult constrctor.";
			objcount++;
		}
};

int staticdemo::objcount=99;
int main()
{
	staticdemo obj1,obj2,obj3;
	cout<<"\nobjectcount"<<obj1.objcount;
	
	return 0;
}