#include <bits/stdc++.h>
using namespace std;

long long mod(long long a, long long b, long long c) {
	if (b == 1) {
		return a % c;
	}
	long long val = mod(a, b / 2, c);
	val = val * val % c; 
	if (b % 2 == 0) //b가 짝수라면 k번째를 구했을때 2k도 구할 수 있다
		return val;
	else //b가 홀수라면 2k+1번째를 구하기 위해 a를 곱하고 나머지를 구한다
		return val * a % c;
	
}  

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	long long a, b, c;
	cin >> a >> b >> c;
	cout << mod(a, b, c);

}