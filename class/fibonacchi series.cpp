#include<stdio.h>
#include<iostream>
using namespace std;
class fibo
{
	private :
		int n;

public :
	int data(int m)
	{
		n=m;
		int i,j,k,s;
		k=0;
		j=1;
		for(i=0;i<=n;i++)
		{
			s=k+j;
		cout<<s<<"\t" ;
		k=j;
		j=s;
	}
	}
	};
	int main()
	{
	fibo a;
	a.data(10);
}
