#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
	int T;
	cin >> T;
	vector<int> v;
	vector <int> ret;
	int s;
	for (int i = 0; i < T;i++) {
		for (int j = 0; j < 10; j++) {
			cin >> s;
			v.push_back(s);
		}
		sort(v.begin(), v.end());
		ret.push_back(v[7]);
		v.clear();
	}
	for (int i = 0; i < T; i++) {
		cout << ret[i] << endl;
	}
	return 0;
}