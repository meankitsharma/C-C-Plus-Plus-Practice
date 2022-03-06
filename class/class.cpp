#include<stdio.h>
#include<iostream>
using namespace std;
class name
{
private:
	int data;
public:
void num(int d)
{
	data=d;
}
void show()
{
	
cout<<data;

}
};
int main()
{
	name a;
	a.num(5);
	a.show();
}
