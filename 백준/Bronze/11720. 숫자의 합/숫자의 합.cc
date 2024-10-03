#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, ret=0;
	string str;
	cin >> n;
	cin>>str;
	for (int i = 0; i < n; i++)
	{
        ret+=(str[i]-'0');
	}
	cout << ret;
	return 0;
}