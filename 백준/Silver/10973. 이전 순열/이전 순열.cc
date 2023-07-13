#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	vector<int> p;

	int N;
	cin >> N;
	int num;
	bool first;
	for (int i = 0; i < N; i++) {
		cin >> num;
		p.push_back(num);
	}
	first=prev_permutation(p.begin(), p.end());
	if (first == true)
		for (int i = 0; i < N; i++)
			cout << p[i] << " ";
	else
		cout << -1;


}