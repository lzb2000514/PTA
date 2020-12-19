#include<iostream>
#include<math.h>
#include<string>
#include<cstdio>
using namespace std;

int main()
{
	char s[4][61];
	for(int i=0;i<4;i++)
	{
		cin>>s[i];
	}
	char xq[7][4]={"MON","TUE","WED","THU","FRI","SAT","SUN"};
	char c1='\0',c2='\0';
	int c3;
	int i=0;
	while(s[0][i]!='\0'&&s[1][i]!='\0')
	{
		if(s[0][i]==s[1][i])
		{
			char t=s[0][i];
			if(c1=='\0'&&t>='A'&&t<='G')
			{
				c1=t;
			}
			else if(c1!='\0'&&c2=='\0'&&(t>='0'&&t<='9'||t>='A'&&t<='N'))
			{
				c2=t;
				break;
			}
		}
		i++;
	}
	i=0;
	while(s[2][i]!='\0'&&s[3][i]!='\0')
	{
		if(s[2][i]==s[3][i])
		{
			if(s[2][i]>='a'&&s[2][i]<='z'||
			s[2][i]>='A'&&s[2][i]<='Z')
			{
				c3=i;
				break;
			}
		}
		i++;
	}
	int flag1=c1-'A',flag2;
	if(c2>='0'&&c2<='9')
	{
		flag2=c2-'0';
	}
	else
	{
		flag2=c2-'A'+10;
	}
	printf("%s %02d:%02d",xq[flag1],flag2,c3);
    return 0;
}