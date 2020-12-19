#include <iostream>
using namespace std;

bool detect(string s)
{
	int i,j;
	int num_P=0,num_T=0;
	for(i=0;i<s.length();i++)
	{
		if(s[i]!='P'&&s[i]!='A'&&s[i]!='T') 
			return false;
    }
	int a1,a2;
	for(i=0;i<s.length();i++)
	{
		if(s[i]=='P')
		{
			num_P++;
			a1=i;
		}
		else if(s[i]=='T')
		{
			num_T++;
			a2=i;
		}	
	}
	if(num_P==1&&num_T==1)
	{
		if(a2-a1!=1&&a1*(a2-a1-1)==(s.length()-a2-1))
		{
			return true;
		}
	}
	return false;
}



int main()
{
	string s[100];int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>s[i];
		if(detect(s[i])==true)
			cout<<"YES"<<endl; 
		else
			cout<<"NO"<<endl;
	}
			
	return 0;
}