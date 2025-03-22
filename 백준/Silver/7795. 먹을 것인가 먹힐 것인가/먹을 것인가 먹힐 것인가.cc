#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t, n, m;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n>>m;
        vector<int> a(n);
        vector<int> b(m);
        int cnt = 0;
        
        for(int j=0;j<n;j++){
            cin>>a[j];
        }
        for(int j=0;j<m;j++){
            cin>>b[j];
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        
        for(int j=0;j<n;j++){
            for(int k=0;k<m;k++){
                if(a[j]>b[k]){
                    cnt++;
                }
                else break;
            }
        }
        cout<<cnt<<'\n';
    }
}