#include<bits/stdc++.h>
using namespace std;

string func(string s) {
	string ret = "";
	bool beforespace = false;
	bool tag = false;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == '<')
			tag = true;
		else if (s[i] == '>')
			tag = false;
		else if(!tag) {
			if (s[i] == ' ') {
				if (!beforespace) {
					ret += s[i];
					beforespace = true;
				}
			}
			else {
				beforespace = false;
				ret += s[i];
			}
		}
	}
	if (!ret.empty() && ret.front() == ' ')
		ret.erase(ret.begin());
	if (!ret.empty() && ret.back() == ' ')
		ret.pop_back();

	return ret;
	
}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	string in;
	getline(cin, in);

	for (int i = 0; i < in.size(); i++) {
		string tmp = "";
		if (in.substr(i, 12) == "<div title=\"") { // 제목 분류
			cout << "title : ";
			i += 12;
			while (in[i] != '"') {
				cout << in[i];
				i++;
			}
				cout << "\n";
			}
		if (in.substr(i, 3) == "<p>") { // 본문
			i += 3;
			string p = "";
			while (in.substr(i, 4) != "</p>") {
				p += in[i];
				i++;
			}
			cout << func(p) << "\n";

		}
	}
}
	
