#include <iostream>
#include <deque>
using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	deque <pair<int, int>> dq;
	int N;
	int number;
	cin >> N;
	for (int i = 1; i <= N; i++) {
		cin >> number;
		dq.push_back(make_pair(number, i));
	}

	while (!dq.empty()) {
		cout << dq.front().second << " ";
		int move = dq.front().first;
		dq.pop_front();

		if (move > 0) {
			for (int i = 0; i < move - 1; i++) {
				dq.push_back(dq.front());
				dq.pop_front();
			}
		}
		else {
			for (int i = move; i < 0; i++) {
				dq.push_front(dq.back());
				dq.pop_back();
			}
		}
	}
	
}