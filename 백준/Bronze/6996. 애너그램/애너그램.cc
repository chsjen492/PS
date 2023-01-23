#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int T;
	string s1, s2;
	string ts, ts2;
	int ret;
	cin >> T;

	for (int i = 0; i < T; i++) {
		cin >> s1 >> s2;
		ts = s1;
		ts2 = s2;
		sort(ts.begin(), ts.end());
		sort(ts2.begin(), ts2.end());
		if (ts == ts2) {
			cout << s1 << " & " << s2 << " are anagrams." << endl;
		}
		else {
			cout << s1 << " & " << s2 << " are NOT anagrams." << endl;
		}

	}
	return 0;

}