#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

bool compare(pair<int, string> v1, pair <int,string> v2) {
	return v1.first < v2.first;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	pair <int, string> v;
	vector <pair<int,string>> v2;
	int N;

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> v.first >> v.second;
		v2.push_back(v);
	}
	stable_sort(v2.begin(), v2.end(), compare);
	
	for (int i = 0; i < N; i++) {
		cout << v2[i].first << " " << v2[i].second << "\n";
	}

}