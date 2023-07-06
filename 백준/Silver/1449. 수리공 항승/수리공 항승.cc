#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int N, L;
	int location;
	vector<int> l;
	cin >> N >> L;
	for (int i = 0; i < N; i++) {
		cin >> location;
		l.push_back(location);
	}
	sort(l.begin(), l.end());
	int start = 0;
	int cnt = 0;
	for (int i = 1; i < N; i++) {
		if (L < l[i] - l[start]+1) {//두 지점 간 거리+테이프 양쪽 간격 0.5*2
			start = i;
			cnt++;
		}
	}
	cout << cnt+1;
}