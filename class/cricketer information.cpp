#include<stdio.h>
#include<iostream>
using namespace std;
class cricketer
{
	private:
		char name[20];
		int age;
		char country[20];
		char type[20];
		int totalmatch;
		public:
			cricketer()
			{
				char name[0];
				int age=0;
				char country[0];
				char type[0];
				int totalmatch=0;
			}
			int read()
			{
				cout<<"Name : ";cin>>name;
					cout<<"age : ";cin>>age;
					cout<<"country : ";cin>>country;
					cout<<"type : ";cin>>type;
					cout<<"total match : ";
					cin>>totalmatch;
					cout<<endl;
					
			}
			int show()
			{
				cout<<"Name :"<<name<<endl;
				cout<<"Age :"<<age<<endl;
				cout<<"Country :"<<country<<endl;
				cout<<"Type :"<<type<<endl;
				cout<<"Total match :"<<totalmatch<<endl;
			}
};
int main()
{
	cricketer c[20];
	for(int i=0;i<=20;i++)
	{
	c[i].read();

}
for(int i=0;i<=20;i++)
{
	c[i].show();
}
}
