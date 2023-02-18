#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
using namespace std;


int main() {
	cout << fixed;
	cout.precision(3);
	int C;
	int N;
	int grade;
	double rate = 0;
	int j = 0;
	vector<int> v;
	int sum = 0;
	double avg = 0;
	int cnt = 0;
	cin >> C;
	for (int i = 0; i < C; i++) {
		cin >> N;
		for (int j = 0; j < N; j++) {
			cin >> grade;
			v.push_back(grade);
			sum += grade;
		}
		avg = sum / N;
		for (int j = 0; j < N; j++) {
			if (v[j] > avg)
				cnt++;
		}
		rate = ((double)cnt / N) * 100;
		cout << rate << "%\n";
		cnt = 0;
		sum = 0;
		v.clear();
	}
	
	
}