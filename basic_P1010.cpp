#include<iostream>
#include<math.h>
#include<string>
#include<sstream>
using namespace std;
struct ds
{
	int xs;
	int zs;	
};

ds a[1001];
char s[1000000];
int ans[3000];

int main()
{
	cin.getline(s,1000000);
	int len=0;
	while(s[len]!='\0')
	{
		len++;
	}
	string str(s,s+len);
	stringstream ss;
	ss<<str;
	int n=0;
	while(ss>>a[n].xs>>a[n].zs)
	{
		n++;
	}
	int N=0;
	for(int i=0;i<n;i++)
	{
		if(a[i].zs==0)
		{
			continue;
		}
		ans[N++]=a[i].xs*a[i].zs;
		ans[N++]=a[i].zs-1;
	}
	for(int i=0;i<N;i++)
	{
		if(i==0)
		{
			cout<<ans[i];
			continue;
		}
		cout<<" "<<ans[i];
	}
	if(N==0)
	{
		cout<<"0 0"<<endl;
	}
    return 0;
}