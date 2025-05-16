#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    int a[200001];
    
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    int ed = 0;
    int used[10]={};
    int ret = 0;
    int mx = -1;
    int fruit = 0;
    for (int st = 0; st < n; st++) {
        while (ed < n) {
            if (used[a[ed]] == 0) {
                if (fruit == 2) break; 
                fruit++;
            }
            used[a[ed]]++;
            ed++;
        }
        ret = max(ret, ed - st);

        used[a[st]]--;
        if (used[a[st]] == 0) fruit--;
    }

    cout << ret << '\n';
}