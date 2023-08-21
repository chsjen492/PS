#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

void cantor(int n) {

	if (n == 0) {
		cout << "-";
		return;
	}
	cantor(n - 1); //공백 전 집합 출력
	for (int i = 1; i <= pow(3, n-1); i++) { //공백 출력
		cout << " ";
	}
	cantor(n - 1); //공백 후 집합 출력

}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	while (cin >> n) {
		cantor(n);
		cout << "\n";
	}

}