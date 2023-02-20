#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
#include <set>
using namespace std;


int main() {
	
	string str;
	char c;
	vector <char> v;
	set <char> word;
	char max_word;
	int max = 0;
	int cnt = 0;
	bool same = false;

	cin >> str;
	if (str.length() == 1) {
		c = toupper(str[0]);
		cout << c;
		return 0;
	}
	for (int i = 0; i < str.length(); i++) {
		str[i] = toupper(str[i]);
		v.push_back(str[i]);
		word.insert(str[i]);

	}


	for (auto iter = word.begin(); iter != word.end();iter++) {
		cnt = count(v.begin(), v.end(), *iter);
		if (max < cnt) {
			max=cnt;
			max_word = *iter;
			same = false;
		}
		else if (max == cnt) {
			same = true;
		}
	}
	if (same == false) {
		cout << max_word << endl;
	}
	else
		cout << "?";
	
}