#include <iostream>
#include <algorithm>
#include <stack>
#include <cstring>
#include <cmath>
using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	string s;
	int n;
	long long sum = 0;
	long long h = 0;
	bool num = false;
	
	cin >> n;
	cin >> s;

	stack<char> st;

	for (int i = 0; i < n; i++) {
		if (s[i] >= '0' && s[i] <= '9') {
			h = h * 10 + (s[i] - '0');
		}
		else {
			sum += h;
			h = 0;
		}

	}
	sum += h;

	cout << sum;

}