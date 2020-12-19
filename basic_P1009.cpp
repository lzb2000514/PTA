#include<iostream>
#include<math.h>
#include<string>
using namespace std;

int main()
{
	char s[100];
	cin.getline(s,100);
	string str[80];
	int n=0;
	int i=0;
	while(s[i]!='\0')
	{
		if(s[i]==' ')
		{
			if(!str[n].empty())
			{
				n++;
			}
			i++;
			continue;
		}
		str[n].append(1,s[i]);
		i++;
	}
	for(i=n;i>=0;i--)
	{
		if(i==n)
		{
			cout<<str[i];
			continue;
		}
		cout<<" "<<str[i];
	}
    return 0;
}