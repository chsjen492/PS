#include <bits/stdc++.h>
using namespace std;

void func(int a, int b, int n) { //원판 n개를 a번 기둥에서 b번 기둥으로 옮기는 방법을 출력하는 함수
	if (n == 1) {
		cout << a << ' ' << b << '\n';
		return;
	}
	func(a, 6 - a - b, n - 1); // n-1개의 원판을 기둥 6-a-b로 옮김
	cout << a << ' ' << b << '\n'; //n번째 원판을 기둥 a에서 b로 옮김
	func(6 - a - b, b, n - 1); //n-1개의 원판을 기둥 b로 옮김
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	cout << (1 << n) - 1 << '\n'; //(1<<n)-> 2^n
	func(1, 3, n);

}