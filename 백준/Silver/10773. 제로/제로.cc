#include<iostream>
#include <stack>
#include <algorithm>
using namespace std;


int main(int argc, char** argv)
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	stack <int> s;
	int K;
	int n;
	cin >> K;
	for (int i = 0; i < K; i++) {
		cin >> n;
		if (n == 0) {
			s.pop();
		}
		else
			s.push(n);
	}
	int sum = 0;
	while (s.size() != 0) {
		sum += s.top();
		s.pop();
	}
	cout << sum;


}