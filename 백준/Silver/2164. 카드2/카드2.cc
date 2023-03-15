#include<iostream>
#include <queue>
#include <algorithm>
using namespace std;

int main(int argc, char** argv)
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	queue <int> q;
	int N;
	int cnt = 1;
	int tmp = 0;
	cin >> N;
	for (int i = 1; i <= N; i++) {
		q.push(i);
	}
	while (q.size() != 1) {
		if (cnt % 2 != 0) {
			q.pop();
		}
		else {
			tmp = q.front();
			q.pop();
			q.push(tmp);
		}
		cnt++;
	}

	cout << q.front();
}