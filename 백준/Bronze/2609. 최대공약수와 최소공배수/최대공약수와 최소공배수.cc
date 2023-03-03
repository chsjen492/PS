#include <iostream>
using namespace std;

int gcd(int a, int b) {
	if (b != 0) {
		return gcd(b, a % b);
	}
	return a;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int a, b;
	cin >> a >> b;
	cout << gcd(a, b) << "\n" << (a * b) / gcd(a, b);
}