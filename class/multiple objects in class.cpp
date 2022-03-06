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
	
cout<< data<<endl;

}
};
int main()
{
	name a,b;
	a.num(5);
	b.num(5);
	a.show();
	b.show();}
