#include<iostream>
#include<math.h>
#include<string>
#include<cstdio>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int *ans=new int[n];
	int i=0;
	long long a,b,c;
	while(i<n)
	{
		cin>>a>>b>>c;
		if(a+b>c)
		{
			ans[i]=1;
		}
		else
		{
			ans[i]=0;
		}
		i++;
	}
	for(int i=0;i<n;i++)
	{
		if(ans[i]==1)
		{
			printf("Case #%d: true\n",i+1);
		}
		else
		{
			printf("Case #%d: false\n",i+1);
		}
		
	}
    return 0;
}