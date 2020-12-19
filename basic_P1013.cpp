#include<iostream>
#include<math.h>
#include<string>
#include<cstdio>
using namespace std;

bool isPrime(int n)
{
	if(n==2||n==3)
		return true;
	if(n<2)
		return false;
	if(n%6!=1&&n%6!=5)
		return false;
	int t=sqrt(n);
	for(int i=5;i<=t;i=i+6)
	{
		if(n%i==0||n%(i+2)==0)
			return false;
	}
	return true;
}

int a[10001];
int la=0;

int main()
{
	int m,n;
	cin>>m>>n;
	int t=0;
	int ans=2;
	while(t<=n)
	{
		if(isPrime(ans))
		{
			t++;
			if(t>=m&&t<=n)
			{
				a[la++]=ans;
			}
		}
		ans++;
	}
	for(int i=0;i<la;i++)
	{
		if(i%10==0)
		{
			cout<<a[i];
		}
		else if(i%10==9)
		{
			cout<<" "<<a[i]<<endl;
		}
		else
		{
			cout<<" "<<a[i];
		}
	}
    return 0;
}