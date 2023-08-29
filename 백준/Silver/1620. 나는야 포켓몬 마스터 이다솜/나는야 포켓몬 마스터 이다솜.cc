#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#include <string>

using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m;
	string name;
	string input;
	map<string, int> no;
	vector<string> names;
	int num;

	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> name;
		no.insert({ name, i });
		names.push_back(name);
	}
	for (int i = 0; i < m; i++) {
		cin >> input;
		if (input[0] - '0' >= 0 && input[0] - '0' <= 9)
		{
			num = stoi(input);
			cout << names[num - 1] << "\n";
		}
		else
		{
			cout << no.at(input) << "\n";
		}
	}
	
}