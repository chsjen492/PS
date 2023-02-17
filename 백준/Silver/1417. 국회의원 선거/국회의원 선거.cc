#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;


int main() {
	
	int N;
	int first;
	int n;
	int people=0;

	priority_queue<int> q;
	cin >> N;
	cin >> first;
	if (N == 1) {
		cout << 0;
		return 0;
	}
	for (int i = 1; i < N; i++) {
		cin >> n;
		q.push(n);
	}

	while (1) {
		if (first > q.top()) {
			break;
		}

		n = q.top();
		q.pop();
		q.push(n - 1);
		first++;
		people++;
	}
	cout << people;
	
}