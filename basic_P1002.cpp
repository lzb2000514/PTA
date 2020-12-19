#include <iostream>
using namespace std;
int main()
{
	char a[102] = {0};
	char s[10][80] = { "ling","yi","er", "san", "si", "wu", "liu", "qi", "ba", "jiu" };
	int sum=0,i=0,t[4];
	cin >> a;
	while (a[i] != 0&&i<101) {
		sum += a[i] - '0';
		i++;
	}
	i = 0;
	while (sum) {
		t[i++]= sum % 10;
		sum /= 10;
	}
	while (i--) {
		cout << s[t[i]];
		if (i != 0)
			cout << " ";
	}

	cout<<endl;
}