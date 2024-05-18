#include<bits/stdc++.h>
using namespace std;

int n, m;
int arr[10];
bool isused[10];

void func(int t) {
    if (t == m) { //n개의 수를 택했을 경우
        for (int i = 0; i < m; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
        return;
    }
    else { //수열 고르기
        for (int i = 1; i <= n; i++) {
            if (!isused[i]) {
                isused[i] = true;
                arr[t] = i;
                func(t+1);
                isused[i] = false;
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> n >> m;

    func(0);
}