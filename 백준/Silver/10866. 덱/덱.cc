#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	deque<int> deq;
	string command;
	int x, n;

	cin >> n;
	for(int i=0;i<n;i++){
		cin >> command;
		if (command == "push_front") {
			cin >> x;
			deq.push_front(x);
		}
		else if (command == "push_back") {
			cin >> x;
			deq.push_back(x);
		}
		else if (command == "pop_front") {
			if (!deq.empty()) {
				cout << deq.front()<<'\n';
				deq.pop_front();
			}
			else
				cout << -1<<'\n';
		}
		else if (command == "pop_back") {
			if (deq.empty())
				cout << -1<<'\n';
			else {
				cout << deq.back()<<'\n';
				deq.pop_back();
			}

		}
		else if (command == "size") {
			cout << deq.size()<<'\n';
		}
		else if (command == "empty") {
			cout << deq.empty()<<'\n';
		}
		else if (command == "front") {
			if (!deq.empty()) {
				cout << deq.front()<<'\n';
			}
			else
				cout << -1<<'\n';
		}
		else {
			if (deq.empty())
				cout << -1<<'\n';
			else {
				cout << deq.back()<<'\n';
			}
		}
	
	}
	
	


}