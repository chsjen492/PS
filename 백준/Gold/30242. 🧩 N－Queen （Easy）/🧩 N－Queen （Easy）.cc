#include <bits/stdc++.h>
using namespace std;

int n;
int visited[20];
bool flag=false;

bool isUsed1[50]; 
bool isUsed2[50];  
bool isUsed3[50]; 

void func(int now) {
    if(flag)
        return;
    if (now == n) { 
        for (int i = 0; i < n; i++) {
            cout << visited[i] << " ";
        }
        flag=true;
    }
    if(visited[now]!=0){
        func(now+1);
        return;
    }
    for (int i = 1; i <= n; i++) {
        if (isUsed1[i] || isUsed2[now + i] || isUsed3[now - i + n - 1]) {
            continue;
        }

        isUsed1[i] = 1;
        isUsed2[now + i] = 1;
        isUsed3[now - i + n - 1] = 1;
        visited[now] = i; 

        func(now + 1);
        if(flag)
            return;
        visited[now]=0;    
        isUsed1[i] = 0;
        isUsed2[now + i] = 0;
        isUsed3[now - i + n - 1] = 0;
    }
}

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> visited[i];
        if (visited[i] != 0) {
            isUsed1[visited[i]] = 1;
            isUsed2[i + visited[i]] = 1;
            isUsed3[i - visited[i] + n - 1] = 1;
        }
    }
    func(0);
    if(!flag)
        cout<<-1;

    return 0;
}
