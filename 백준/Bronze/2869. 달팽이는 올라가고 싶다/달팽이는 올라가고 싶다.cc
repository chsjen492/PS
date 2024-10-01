#include <bits/stdc++.h>
using namespace std;

int func(int a, int b, int v) {
    int days = (v - b - 1) / (a - b) + 1;
    return days;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int a, b, v;
    cin >> a >> b >> v;
    cout << func(a, b, v);
    return 0;
}