#include<stdio.h>
#include<iostream>
using namespace std;
class name
{
	private:
		int data;
		public:
			
			name()
			{
				cout<<"i am a constructor";
			}
			~name()
			{
				cout<<"i am a destructor";
			}
			void sub(int d)
			{
				data=d;
			}
			void show()
			{
				cout<<data<<endl;
	
			}
};

int main()
{
	name a,b;
	a.sub(10);
	b.sub(15);
	a.show();
	b.show();
}
