#include<stdio.h>
#include<iostream>
using namespace std;
class name
{
private:
	int data;
public:
	name(int d)
	{
		cout<<"i am a constructor";
		data=d;
	}
void show()
{
	
cout<< data<<endl;

}
};
int main()
{
	name a(5),b(10);
	a.show();
	b.show();}
