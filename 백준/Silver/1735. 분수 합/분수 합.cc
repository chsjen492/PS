#include <iostream>
#include <algorithm>
using namespace std;

int gcd(int a, int b) {
	return b ? gcd(b, a % b) : a;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int A1, B1, A2, B2;
	cin >> A1 >> B1;
	cin >> A2 >> B2;
	int GCD = gcd(B1, B2);
	long long A = (A1 * B2 + A2 * B1)/GCD;
	long long B = (B1 * B2)/GCD;
	GCD = gcd(A, B);
	A /= GCD;
	B /= GCD;
	cout << A<< " " << B;

}