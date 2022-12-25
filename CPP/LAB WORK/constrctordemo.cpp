#include<iostream>
using namespace std;

class Box{
	public:
		double width,hight,depth;
		
		Box()
		{
			cout<<"defult constractor called.";
			width=3;
			hight=4;
			depth=5;
			
		}
		
		Box(double w,double h,double d)
		{
			cout<<"\n\nparameterized constractor called.";
			width=w;
			hight=h;
			depth=d;
			
			
		}
		
		
		Box(const Box &h)
		{
			cout<<"\ncopy constractor called.";
			width=h.width;
			hight=h.hight;
			depth=h.depth;
		}
		void show()
		{
			cout<<"\nvolume is"<<(width*hight*depth);
		}
};

int main()
{
      Box obj1;
      obj1.show();
      Box obj2(3,4,7); //constractor called.
      obj2.show();
      Box obj3(obj1/*2*/);
     obj3.show();
      return 0;
	
}