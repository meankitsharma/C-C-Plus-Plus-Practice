#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;
	int n,a,s,r,q,i=0,sum=0,s1,t;
	int check(int);
int main()
{
	cin>>t;
	for(i=1;i<=t;i++)
	{
	//cout<<"enter the ternary number"<<endl;
	cin>>n;
	//cout<<"the ternary number is = "<<n<<endl;
	while(n>0)
	{
		a=n%10;
		s=s+a*pow(3,i);
		n=n/10;
		i++;
	}
	cout<<s<<endl;
check(s);
}
 //q = s;
}

int check(int sum1)
 {
 	//cout<<"p";
	 int sum=0;
   while (sum1 > 0)
   {
      r = sum1 % 10;
      sum = sum + r;
      sum1 = sum1 / 10;
   }

   if(sum>9)
   {
    check(sum);
   }
else
{
cout<<sum;
}
}
