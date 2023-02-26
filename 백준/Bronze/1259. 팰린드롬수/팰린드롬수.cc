#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	string s;
	string rev;

	while (1) {
		cin >> s;
		if (s == "0") {
			return 0;
		}
		rev = s;
		reverse(rev.begin(), rev.end());
		if (rev == s) {
			cout << "yes\n";
		}
		else
			cout << "no\n";
	}

}