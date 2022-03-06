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
		data=0;
		cout<<"i am a constructor";
	}
void plus()
{
	data++;
}
void minus()
{
	data--;
}
void show()
{
	
cout<<endl<< data<<endl;

}
};
int main()
{
	name a,b;
	a.plus();
	a.plus();
	a.minus();
	b.minus();
	b.minus();
	b.plus();
	a.show();
	b.show();}
