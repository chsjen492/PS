#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

struct compare {
	bool operator()(const string& a, const string& b) const{
		if (a.size() == b.size())
			return a < b;
		else
			return a.size() < b.size();
	}
};
int main() {
	
	int N;
	cin >> N;
	string s;
	set<string, compare> word;

	for (int i = 0; i < N; i++) {
		cin >> s;
		word.insert(s);
	}

	for (auto i:word) {
		cout << i << "\n";
	}
}