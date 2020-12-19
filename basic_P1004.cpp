#include <iostream>
#include<string>
using namespace std;

struct stu
{
	string name;
	string number;
	int score;
};

int main() {
	stu maxs,mins;
	int n;
	cin>>n;
	cin>>maxs.name>>maxs.number>>maxs.score;
	mins.name=maxs.name;
	mins.number=maxs.number;
	mins.score=maxs.score;
	for(int i=1;i<n;i++)
	{
		stu t;
		cin>>t.name>>t.number>>t.score;
		if(t.score>maxs.score)
		{
			maxs.name=t.name;
			maxs.number=t.number;
			maxs.score=t.score;
		}
		if(t.score<mins.score)
		{
			mins.name=t.name;
			mins.number=t.number;
			mins.score=t.score;
		}
	}
	cout<<maxs.name<<" "<<maxs.number<<endl;
	cout<<mins.name<<" "<<mins.number<<endl;
	return 0;
}