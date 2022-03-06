#include<iostream>
#include<conio.h>
using namespace std;

class name
{

	int i,j;

public:	
 name(int pp=1, int jj=2)
 
 {
 	i=pp;
 	j=jj;
 	cout<<i<<' '<<j;
 	cout<<endl;
 	cout<<"yo yo honey singh";
 	
 }
 int add();
 ~name()
 {
 	cout<<"naina";
 }

};
int main()
{
name a;
a=name(3);//<<a.i;
a.add();
}
int name:: add()
{
	cout<<"asd";
}
