#include<stdio.h>
#include<iostream>
using namespace std;
class add
{
	private:
		int x,y;
		
public:
	add()
	{

cout<<" i am in add "<<endl;		
        x=0;
		y=0;
	}
	int read()
	{
		cout<<"enter the valiue of x ";
		cin>>x;
			cout<<"enter the valiue of y ";
		cin>>y;
		
	}
	int show()
	{
	cout<<"sum of x & y is = "<<x+y<<endl;
}
};

int main()
{
	add a;
	a.read();
	a.show();
}
