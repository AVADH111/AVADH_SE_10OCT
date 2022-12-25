#include<iostream>
using namespace std;

class detail{
	public:
		string name;
		
		void getname()
		{
			cout<<"Enter name :";
			//cin>>name;
			getline(cin,name);//use between variable(name) space.
		}
		
		void display()
     	{
		    cout<<"\nName : "<<name;
    	}
	};
	
	int main()
	{
     detail obj1;
     obj1.getname();
    obj1.display();
	return 0;
	}