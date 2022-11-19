#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n;
	vector <string> v1;
	vector <string> v2;
	int index = 0;
	bool arrange;
	string s;
	string g = "good";
	string b = "bad";

	cin >> n;
	
	for (int i = 0; i < n; i++) {
		cin >> s;
		v1.push_back(s);
	}
	for (int i = 0; i < n; i++) {
		cin >> s;
		v2.push_back(s);
	}

	int num = 0;

	while (num<n) {
		if (v1[num] == v2[num]) {
			arrange = false;
			break;
		}
		index = find(v2.begin(), v2.end(), v1[num]) - v2.begin();
		if (v2[num] == v1[index]) {
			arrange = true;
		}
		else {
			arrange = false;
			break;
		}
		num++;
	}

	if (arrange == true)
		cout << g;
	else
		cout << b;

}