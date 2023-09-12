#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n;
	int tmp;
	vector<int> v;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> tmp;
		v.push_back(tmp);
	}
	if (next_permutation(v.begin(), v.end()) == 0)
		cout << -1;
	else {
		for (int i = 0; i < n; i++) {
			 cout<<v[i] << " ";
		}
	}
	
	
	
}