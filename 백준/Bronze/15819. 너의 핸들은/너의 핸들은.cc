#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
using namespace std;

int main() {
	int N, I;
	string s;
	vector<string> v;

	cin >> N >> I;

	for (int i = 0; i < N; i++) {
		cin >> s;
		v.push_back(s);
	}
	sort(v.begin(), v.end());

	cout << v[I - 1] << "\n";

}