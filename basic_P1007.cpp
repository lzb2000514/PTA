#include<iostream>
#include<math.h>
using namespace std;

bool isPrime(int n)
{
	if(n<2)
		return false;
	if(n==2||n==3)
		return true;
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

int main()
{
	int n;
	cin>>n;
	int ans=0;
	int t1=0,t2=0;
	for(int i=2;i<=n;i++)
	{
		if(isPrime(i))
		{
			if(t1==0)
				t1=i;
			else if(t2==0)
				t2=i;
			else
			{
				t1=t2;
				t2=i;
				if(t2-t1==2)
					ans++;
			}
		}
    }
    cout<<ans<<endl;
    return 0;
}