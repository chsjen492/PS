#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
	int N, M;
	int n;
	vector <int> card;

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> n;
		card.push_back(n);
	}
	sort(card.begin(), card.end());

	cin >> M;
	
	for (int i = 0; i < M; i++) {
		cin >> n;
		cout<<binary_search(card.begin(), card.end(), n) << " ";
	}

}