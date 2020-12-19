#include<iostream>
#include<math.h>
#include<string>
using namespace std;

int main()
{
	int N,M;
	cin>>N>>M;
	int* a=new int[N];
	for(int i=0;i<N;i++)
	{
		cin>>a[i];
	}
	M=M%N;
	for(int i=N-1,j=N-M;i>j;i--,j++)
	{
		int t=a[i];
		a[i]=a[j];
		a[j]=t;
	}
	for(int i=N-M-1,j=0;i>j;i--,j++)
	{
		int t=a[i];
		a[i]=a[j];
		a[j]=t;
	}
	for(int i=N-1,j=0;i>j;i--,j++)
	{
		int t=a[i];
		a[i]=a[j];
		a[j]=t;
	}
	for(int i=0;i<N;i++)
	{
		if(i==0)
		{
			cout<<a[i];
			continue;
		}
		cout<<" "<<a[i];
	}
    return 0;
}