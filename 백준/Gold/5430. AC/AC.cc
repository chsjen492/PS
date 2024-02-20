#include <bits/stdc++.h>
using namespace std;


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int T;
	cin >> T;
	string p;
	int n, tmp=0;
	string arr;
	bool reverse = 0;
	bool err = 0;
	deque<int> dq;

	while (T > 0) {
		cin >> p;
		cin >> n;
		cin >> arr;
		tmp = 0;
		reverse = 0;
		err = 0;
		if (n != 0) {
			for (int i = 1; i < arr.length(); i++) {

				if (arr[i] == ',' || arr[i] == ']')
				{
					dq.push_back(tmp);
					tmp = 0;
				}
				else
					tmp = tmp * 10 + (arr[i] - '0');
			}
		}
		for (int i = 0; i < p.length(); i++) {
			if (p[i] == 'R')
				reverse = !reverse;
			if (p[i] == 'D') {
				if (dq.empty()) {
					cout << "error\n";
					err = true;
					break;
				}
				if (reverse == 0)
					dq.pop_front();
				if (reverse == 1)
					dq.pop_back();
			}
		}
		int size = dq.size();
		if (err != true) {
			cout << '[';
			if (reverse == 0) {
				for (int i = 0; i < size; i++) {
					if (i == size - 1)
					{
						cout << dq.front();
						dq.pop_front();
					}
					else
					{
						cout << dq.front()<<',';
						dq.pop_front();
					}
				}
			}
			else {
				for (int i = 0; i < size; i++) {
					if (i == size - 1)
					{
						cout << dq.back();
						dq.pop_back();
					}
					else
					{
						cout << dq.back() << ',';
						dq.pop_back();
					}
				}
			}
			cout << "]\n";
		}
		
		T--;
	}


}