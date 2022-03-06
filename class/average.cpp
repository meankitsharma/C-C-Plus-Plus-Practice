#include<stdio.h>
#include<iostream>
using namespace std;
class average
{
	private :
		int n;
		int a[10];
		public :
			int read()
			{
				int i;
				cout<<"enter the no. of elements you want to enter"<<endl;
				cin>>n;
				cout<<"enter the numbers"<<endl;
				for(i=0;i<n;i++)
				{
					cin>>a[i];
				}
			}
				float avg()
				{
					float sum=0;
						for(int i=0;i<n;i++)
						{
							sum=sum+a[i];
						}
						return sum/n;
					
				}
			};
			int main()
			{
				average s;
				s.read();
				cout<<"average is = "<<s.avg();
			}

