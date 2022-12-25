#include<iostream>
using namespace std;

class Address{
	
	public:
		string addressline, city, state;
		
		Address(string a,string c,string s)
       {
	      addressline= a;
	      city =c;
	      state =s;
        }
};

class Employee{
	
	private:
		Address *address;
		public:
			int id;
			string name;
	Employee(int i,string n,Address *a)		
		{
			id =i;
			name =n;
			address =a;
		}	
		
		void display()
			{
				cout<<id<<" "<<name<<" "<<
			    address->addressline<<" "<<address->city<<" "<<address->state<<endl;
			}
};

int main(void)
{
	Address B("\n215,suvidha raw house,\nsimada naka.","\nsurat.","\ngujarat.");
    Employee e1(111,"\njainil malani.",&B);
   e1.display();

	return 0;
}