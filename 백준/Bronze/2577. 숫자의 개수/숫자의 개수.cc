#include <iostream>
#include <string>
using namespace std;

int main() {
	int a, b, c;
	int t = 0;
	int arr[10] = { 0, };
	string s;

	cin >> a >> b >> c;
	t = a * b * c;
	s = to_string(t);
	for (int i = 0; i < s.length(); i++) {
		arr[s[i]-'0']++;
	}
	for (auto x : arr) {
		cout << x << "\n";
	}
}