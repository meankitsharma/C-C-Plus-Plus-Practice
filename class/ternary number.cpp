#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int n,t,s,s1;
int decimal();
int sumdigit(int);
int main()
{
	cin>>t;
	for(int i=1;i<=t;i++)
	{
		cin>>n;
		decimal();
		s1=sumdigit(s);
		cout<<s1<<endl;
		
	}
}
int decimal()
{
	int a,i=0;s=0;
	while(n>0)
	{
		a=n%10;
		s=s+a*pow(3,i);
		n=n/10;
		i++;
	}
	cout<<s<<endl;
}
int sumdigit(int ss)
{
	int l,s2=0;
	while(ss>0)
	{
		l=ss%10;
		s2=s2+l;
		ss=ss/10;
	}
	if( s2>9)
	sumdigit(s2);
	else
	return s2;
}
