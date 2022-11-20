#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main() {
	vector<vector<string>>flight;
	vector<vector<string>>ret;
	string s;
	vector <string> v;
	int num = 0;
	int num2 = 0;
	int count = 1;
	int point = 0;
	int upgrade = 0;

	while (1) {
		cin >> s;
		if (s == "#")
			break;
		ret[num].push_back(s);
		while (1) {
			cin >> s;
			if (s == "00A")
				break;
			if (count % 2 != 0&&count!=1) {
				if (find(flight.begin(), flight.end(), s) != flight.end())
				{
					flight[num2].push_back(s);
					count++;
					continue;
				}
				else {
					cin >> s;
					flight[find(flight.begin(), flight.end(), s) - flight.begin()].push_back(s);
					count++;
				}
			}
			else if (count == 1) {
				flight[num2].push_back(s);
			}
			else {
				flight[num2].push_back(s);
				count++;


			}
			num2++;
			continue;
		}
		for (int i = 0; i < num2; i++) {
			if (find(flight[i].begin(), flight[i].end(), "L") != flight[i].end())
				point += 120;
			if (find(flight[i].begin(), flight[i].end(), "S") != flight[i].end()|| find(flight[i].begin(), flight[i].end(), "B") != flight[i].end())
				point += 150;
			if (find(flight[i].begin(), flight[i].end(), "N") != flight[i].end())
				point += 40;
			if (find(flight[i].begin(), flight[i].end(), "C") != flight[i].end())
				point += 160;
			if (find(flight[i].begin(), flight[i].end(), "D") != flight[i].end()|| find(flight[i].begin(), flight[i].end(), "R") != flight[i].end()|| find(flight[i].begin(), flight[i].end(), "O") != flight[i].end())
				point += 100;

			if (point >= 200)
				upgrade++;
		}
		ret[num].push_back(to_string(upgrade));
		num++;
		num2 = 0;
		count = 0;
	}

	for (int j = 0; j < num; j++)
		cout << ret[j][0] << " " << ret[j][1] << endl;
}