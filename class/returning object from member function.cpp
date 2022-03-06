#include<stdio.h>
#include<iostream>
using namespace std;
class data
{
	private :
		int d;
		public :
			data()
			{
				d=0;
			}
data(int t)
{
	d=t;
}
int show()
{
	cout<<d<<endl;

}
data add(data a)
{
	data tempa;
	tempa.d=a.d+d;
	return tempa;
}
};
int main()
{
	data c(2),e(3),f;
	f=c.add(e);
	f.show();
	
}

