#include <iostream>
#include <algorithm>
#include<vector>
using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	long long arr[101] = { 0, };
	arr[0] = 1;
	arr[1] = 1;
	arr[2] = 1;
	int j = 3;
	for (int i = 3; i < 101; i++) { //모든 변의 길이 구하기
		arr[i] = arr[i-3] + arr[i -2];
	}
	int T, n;
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> n;
		cout << arr[n - 1]<<"\n"; //변의 길이 출력
	}
}