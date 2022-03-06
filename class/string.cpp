#include<stdio.h>
#include<iostream>
using namespace std;
class sub
{
	private:
		char *str;
		public:
			int read()
			{
				
				cout<<"enter the string"<<endl;
				cin>>str;
			}
			int show()
			{
				cout<<str<<endl;
			}
			
};
int main()
{
sub s;
	s.read();
	s.show();
}
