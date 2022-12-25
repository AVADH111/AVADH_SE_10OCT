#include<iostream>
using namespace std;

class Student{
	public:
		string name;
		
		void getName()
		{
			cout<<"\nEnter Name : ";
			cin>>name;
		}	
		
};

class ExtraMarks{
	public:
		int sp;
		
		ExtraMarks()
		{
			sp = 60;
		}	
};


class Result : public Student,public ExtraMarks
{
	public:
		int s1,s2,s3,tot;
		float per;
		
		Result()
		{
			s1 = 76;
			s2 = 68;
			s3 = 78;			
			tot = s1+s2+s3+sp;
			per = (float)tot/4;
		}
		
		void display()
		{
			cout<<"\nName : "<<name;
			cout<<"\nTotal : "<<tot;
			cout<<"\nPercentage : "<<per;
		}
		
};


int main()
{
	Result rs;
	rs.getName();
	rs.display();

	return 0;
}