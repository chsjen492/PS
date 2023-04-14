#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool num[1000001] = { 0, };
void eratos(int a, int b) { //에라토스테네스의 체
	if (b <= 1)
		return;
	for (int i = 2; i <= b; i++) {
		num[i] = true;
	}
	for (int i = 2; i * i <= b; i++) {
		if (num[i])
			for (int j = i * i; j <= b; j += i)
				num[j] = false;
	}

}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int M, N;
	cin >> M >> N;
	
	eratos(M,N);

	for (int i = M; i <= N; i++) {
		if (num[i] == true)
			cout << i << "\n";
	}

}