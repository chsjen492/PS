#include <iostream>
#include <string>
using namespace std;
int cnt1 = 1;
int cnt2 = 1;
unsigned long long ret[40] = { 0,1,1 };
int fib(int n) {
	
	if (n == 1 || n == 2)
		return 1;
	else {
		cnt1++;

		return (fib(n - 1) + fib(n - 2));
	}
}

int fibonacci(int n) {
	for (int i = 3; i < n; i++) {
		ret[i] = ret[i - 1] + ret[i - 2];
		cnt2++;
	}
	return ret[n];
}
int main() {
	int n;
	cin >> n;
	fib(n);
	fibonacci(n);
	cout << cnt1 << " " << cnt2;

}