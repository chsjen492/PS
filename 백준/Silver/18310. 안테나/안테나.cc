#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	int location;
	vector<int> loc;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> location;
		loc.push_back(location);
	}
	sort(loc.begin(), loc.end());

	cout << loc[(n-1) / 2];
	
}