#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int main() {
	string a, b;
	int cnt = 1;

	while (1) {
		cin >> a;
		cin >> b;
		if (a == b && b == "END")
			break;
		sort(a.begin(), a.end());
		sort(b.begin(), b.end());

		if (a == b) {
			cout << "Case " << cnt << ": same\n";
		}
		else
			cout << "Case " << cnt << ": different\n";

		cnt++;
	}

}