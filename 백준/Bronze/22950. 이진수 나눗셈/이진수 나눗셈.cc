#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstring>
using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int N, K;
	int decimal = 0;
	int index = 0;
	string m;

	cin >> N;
	cin >> m;
	cin >> K;
	int cnt = 0;
	bool zero = false;

	for (int i = m.length()-1; i >=0; i--) {
		if (m[i] == '0')
		{
			cnt++;
			zero = true;
		}
		else {
			if (cnt < K) {
				cnt = 0;
				zero = false;
				break;
			}
			zero = false;
		}
	}
	if (cnt >= K||zero==true)
		cout << "YES";
	else
		cout << "NO";
}