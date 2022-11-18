#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector <string> file;
	vector <string> temp;
	string s;
	string r;
	int index=0;

	for (int i = 0; i < n; i++) {
		cin >> s;
		r = s;
		reverse(r.begin(), r.end());
		if (s == r) {
			cout << s.size() << " " << s[s.size() / 2];
		}
		file.push_back(s);
	}

	temp = file;

	sort(file.begin(), file.end());

	for(int j=0;j<n;j++)
		for (int k = j + 1; k < n; k++) {
			if (file[j] == file[k])
				index = j;
		}
	cout << temp[index].size() << " " << temp[index][temp[index].size() / 2];
}