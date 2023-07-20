#include <iostream>
using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	long long k = 1; //배수
	int p = 1; //자릿수
	while (cin >> n) {
		while (1) {
			if (k % n == 0) {
				cout << p << "\n";
				break;
			}
			else {
				k = (10 * k + 1) % n;
				p++;
			}
		}
		k = 1;
		p = 1;
	}

}