#include <iostream>
using namespace std;

int main()
{
	int a[1000];
	for(int i=0;i<1000;i++)
		a[i]=-1;
	int K;
	cin>>K;
	int b[1000];
	for(int i=0;i<K;i++)
	{
		cin>>b[i];
		a[b[i]]=1;
	}
	for(int i=0;i<K;i++)
	{
		while(b[i]!=1)
		{
			if(b[i]%2==0)
			{
				b[i]/=2;
			}
			else
			{
				b[i]=3*b[i]+1;
				b[i]/=2;
			}
			if(b[i]>=2&&b[i]<1000)
			{
				a[b[i]]=-1;
			}
		}
	}
	int flag=0;
	for(int i=999;i>=2;i--)
	{
		if(a[i]==1)
		{
			if(flag==1)
			{
				cout<<" ";
			}
			cout<<i;
			flag=1;
		}
	}
	return 0;
}