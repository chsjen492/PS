#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, t;
    long long ret = 0;
    stack<int> s;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>t;
        while(!s.empty()){
            if(s.top()>t) break;
            s.pop();
        }
        
        s.push(t);
        ret+=s.size()-1;
    }
    
    cout<<ret;
}