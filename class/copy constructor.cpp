#include<iostream>
#include<conio.h>
//#include<string>
using namespace std;

	class ex{
		private:
			int i;
			float j;
			
		public:
			ex()
			{
				cout<<"n"<<endl;
			}
			ex(int ii,float jj)
			{
				cout<<"b"<<endl;
				i=ii;j=jj;
			}
			ex(const ex&p)
			{
				cout<<"hello.."<<endl;
				i=p.i;
				j=p.j;
			}
			int set(ex x)
			{
				i=x.i;
			}
			int show()
			{
				cout<<i<<" "<<j<<endl;
			}
			friend int naina();
	};
	
	ex fun()
	{
		ex t(2,4);
		return t;
	}
	
	int main()
	{
		ex e1;
		e1={1,2.5};
		e1.show();
		ex e2;
		e2=e1;
		e2.show();
		e2=fun();
		e2.show();
		ex e3(e2);
		e3.show();	
	    ex e4[2];
	    e4[1]=e1;
		e4[0]={1,2};
		e4[0].show();
		e4[1].show();	
	
int naina();
naina();
	}
	
int naina()
{
	ex p;
	p.i=2;
	p.j=3;
	cout<< p.i<<p.j;

}
