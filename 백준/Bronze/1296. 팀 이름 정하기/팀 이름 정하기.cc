#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int L = 0;
int O = 0;
int V = 0;
int E = 0;

vector <int> ret;
void probability(string a, string p) {
	for (int i = 0; i < p.length(); i++) {
		if (p[i] == 'L')
			L++;
		else if (p[i] == 'O')
			O++;
		else if (p[i] == 'V')
			V++;
		else if (p[i] == 'E')
			E++;
	}
	for (int i = 0; i < a.length(); i++) {
		if (a[i] == 'L')
			L++;
		else if (a[i] == 'O')
			O++;
		else if (a[i] == 'V')
			V++;
		else if (a[i] == 'E')
			E++;
	}
	int i = ((L + O) * (L + V) * (L + E)* (O + V)* (O + E)* (V + E)) % 100;
	ret.push_back(i);
	L = O = V = E = 0;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	string name;
	string tmp;
	int N;
	vector<string> team;
	cin >> name;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> tmp;
		team.push_back(tmp);
	}
	sort(team.begin(), team.end());

	for (int i = 0; i < N; i++) {
		probability(name, team[i]);
	}

	int index = max_element(ret.begin(), ret.end()) - ret.begin();
	cout << team[index];
}