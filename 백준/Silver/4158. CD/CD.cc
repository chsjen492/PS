#include <iostream>
#include <algorithm>
using namespace std;
long long a[1000001];
long long b[1000001];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    while(true){
        int n, m;
        cin>>n>>m;
        if(n==0&&m==0) break;
        
        for(int i = 0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<m;i++){
            cin>>b[i];
        }
        
        int ret = 0;
        for(int i=0;i<n;i++){
            if(binary_search(b, b+m, a[i])) ret++;
        }
        cout<<ret<<'\n';
    }
}