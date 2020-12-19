#include<iostream>
#include<math.h>
#include<string>
#include<cstdio>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int a[6],flag[6];
	int flag2=1;
	int n4=0;
	for(int i=1;i<=5;i++)
	{
		a[i]=0;
		flag[i]=0;
	}
	int b;
	int t;
	for(int i=0;i<n;i++)
	{
		cin>>b;
		t=b%5;
		if(t==0&&b%2==0)
		{
			flag[1]=1;
			a[1]+=b;
		}
		if(t==1)
		{
			flag[2]=1;
			a[2]+=flag2*b;
			flag2=-flag2;
		}
		if(t==2)
		{
			flag[3]=1;
			a[3]++;
		}
		if(t==3)
		{
			flag[4]=1;
			a[4]+=b;
			n4++;
		}
		if(t==4)
		{
			if(b>a[5])
			{
				flag[5]=1;
				a[5]=b;
			}
		}
	}
	for(int i=1;i<=5;i++)
	{
		if(i==1)
		{
			if(flag[i])
			{
				cout<<a[i];
			}
			else
			{
				cout<<"N";
			}
			continue;
		}
		if(flag[i]==0)
		{
			cout<<" N";
			continue;
		}
		else
		{
			if(i==4)
			{
				printf(" %.1f",(double)a[i]/n4);
			}
			else
			{
				printf(" %d",a[i]);
			}
		}
	}
    return 0;
}