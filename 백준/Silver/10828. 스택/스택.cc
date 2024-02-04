#include <bits/stdc++.h>
using namespace std;

//STL ver
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N, x;
	string command;
	stack<int> s;
    
    cin>>N;
	for (int i = 0; i < N; i++) {
		cin >> command;
		if (command == "push") {
			cin >> x;
			s.push(x);
		}
		if (command == "top"){
		    if(s.empty())
		        cout<<-1<<'\n';
		    else
		        cout<<s.top()<<'\n';
		}
		if (command == "pop") {
			if (s.empty())
				cout << -1 << '\n';
			else {
				cout << s.top() << '\n';
				s.pop();
			}
		}
		if (command == "size")
			cout << s.size() << '\n';
		if (command == "empty") {
			if (s.empty())
				cout << 1 << '\n';
			else
				cout << 0 << '\n';
		}
	}


}