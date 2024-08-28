#include<bits/stdc++.h>
using namespace std;

int left_k[3000005];
int right_k[3000005];
vector<int> r;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;

    int k = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'K') {
            k++;
            continue;
        }
        r.push_back(i);
        left_k[i] = k;
    }

    k = 0;
    for (int i = s.length() - 1; i >= 0; i--) {
        if (s[i] == 'K') {
            k++;
            continue;
        }

        right_k[i] = k;
    }

    int left = 0, right = r.size() - 1, ret = 0;
    while (left <= right) {
        int k1 = left_k[r[left]];
        int k2 = right_k[r[right]];

        ret = max(ret, right - left + 1 + (min(k1, k2) * 2));

        if (k1 > k2) {
            right--;
        }
        else {
            left++;
        }
    }

    cout << ret;

}
