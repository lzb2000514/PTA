#include<iostream>
#include<math.h>
#include<string>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int flag=0;
	string s="";
	while(n!=0)
	{
		int t=n%10;
		n=n/10;
		flag++;
		if(flag==1)
		{
			for(int i=t;i>=1;i--)
			{
				s=to_string(i)+s;
			}
		}
		else if(flag==2)
		{
			for(int i=1;i<=t;i++)
			{
				s="S"+s;
			}
		}
		else if(flag==3)
		{
			for(int i=1;i<=t;i++)
			{
				s="B"+s;
			}
		}
	}
	cout<<s<<endl;
    return 0;
}