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
		cout<<"i am a constructor without argument";
		data=0;
	}
	name(int d)
	{
		cout<<"i am a constructor with one argument";
		data=d;
	}
void add(name a,name b)
{
	data=a.data+b.data;
}
void show()
{
	
cout<< endl<<data<<endl;

}
};
int main()
{
	name a(5),b(6),c;
	c.add(a,b);
	c.show();
}
