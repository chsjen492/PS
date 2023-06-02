#include <iostream>
#include <set>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int N, M;
	string s;
	int cnt = 0;
	set<string> st;
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		cin >> s;
		st.insert(s);
	}
	for (int i = 0; i < M; i++) {
		cin >> s;
		if (st.find(s) != st.end())
			cnt++;
	}
	cout << cnt;
}