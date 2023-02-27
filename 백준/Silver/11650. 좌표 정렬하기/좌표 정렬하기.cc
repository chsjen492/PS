#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	vector <vector<int>> v;
	vector <int> v2;
	int N;
	int x, y;

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> x >> y;
		v2.push_back(x);
		v2.push_back(y);
		v.push_back(v2);
		v2.clear();
	}
	sort(v.begin(), v.end());
	
	for (int i = 0; i < N; i++) {
		cout << v[i][0] << " " << v[i][1] << "\n";
	}

}