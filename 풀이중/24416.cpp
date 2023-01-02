#include <iostream>
#include <string>
using namespace std;
int cnt1 = 0;
int cnt2 = 0;
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
	cnt2++;
	if (n < 3)
		return ret[n];
	else if (ret[n]) {
		return ret[n];
	}
	else{
		int n1 = 0;
		int n2 = 0;
		n1 = fibonacci(n - 1);
		n2 = fibonacci(n - 2);
		return ret[n] = n1 + n2;
	}
}
int main() {
	int n;
	cin >> n;
	fib(n);
	fibonacci(n);
	cout << cnt1 << " " << cnt2;

}