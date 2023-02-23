#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;



int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int N, K;
	int index = 1;
	queue <int> q;

	cin >> N >> K;

	for (int i = 1; i <= N; i++) {
		q.push(i);
	}
	cout << "<";
	while (1) {
		if (q.size() == 1)
			break;
		if (index == K) {
			cout << q.front() << ", ";
			q.pop();
			index = 1;
		}
		else {
			q.push(q.front());
			q.pop();
			index++;
		}
	}
	cout << q.front() << ">";
}