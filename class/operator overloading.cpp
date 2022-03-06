#include<iostream>
#include<conio.h>
using namespace std;
class ex
{
	int i,j;
	public:
		ex(int ii=0,int jj=0)
		{
			i=ii;
			j=jj;
		}
		ex operator-(ex p)
		{
			ex t;
			t.i=i+p.i;
			t.j=j+p.j;
			return t;
		}
		int show()
		{
			cout<<i<<j<<endl;
			
		}
		
};
int main()
{
	ex e1(2,3);
	ex e2(4,5);
	ex e3(0,0);ex e4;
	e3=e1-e2;
	e4=e3-e1;
	e3.show();
	e4.show();
}
