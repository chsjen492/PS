#include <bits/stdc++.h>
using namespace std;


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int N;
	cin >> N;
	
	vector<int> arr;
	int t;
	int sum = 0;
	int occur[8001];
	int max_fre;
	bool input[8001];
	vector<int> fre;

	fill(occur, occur + 8001, 0);
	for (int i = 0; i < N; i++) {
		cin >> t;
		sum += t;
		arr.push_back(t);
		occur[t+4000]++;
	}
	sort(arr.begin(), arr.end());
	max_fre = *max_element(occur, occur + 8001);
	if (round((float)sum / N) == -0)
		cout << 0 << '\n';
	else
		cout << round((float)sum / N) << "\n";
	cout << arr[N / 2] << "\n";
	
	for (int i = 0; i < N; i++) {
		if (occur[arr[i] + 4000] == max_fre)
			if (input[arr[i] + 4000] != true) {
				fre.push_back(arr[i]);
				input[arr[i] + 4000] = true;
			}
	}
	if (fre.size() > 1) {
		sort(fre.begin(), fre.end());
		cout << fre[1] << '\n';
	}
	else
		cout << fre[0] << '\n';

	cout << arr[N - 1] - arr[0]<<'\n';


}