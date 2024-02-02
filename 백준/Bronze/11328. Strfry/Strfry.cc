#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;

	string first_s;
	string second_s;

	cin >> n;
	for (int k = 0; k < n; k++) {
		int oc[27] = {};
		cin >> first_s >> second_s;
		if(first_s.length()!=second_s.length()){
		    cout<<"Impossible\n";
		    continue;
		}
		for (int i = 0; i < first_s.length(); i++) {
			oc[first_s[i] - 97]++;
		}
		
		for (int j = 0; j < second_s.length(); j++) {
			if (oc[second_s[j]-97] != 0) {
				if (j == second_s.length() - 1) {
					cout << "Possible\n";
				}
				oc[second_s[j] - 97]--;
				continue;
			}
			else {
				cout << "Impossible\n";
				break;
			}
		}
		
	}

}