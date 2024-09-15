#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    string l, r;
    int ret=0;
    cin>>l>>r;
    
    if(l.length()!=r.length()){
        cout<<ret;
        return 0;
    }
    else {
        for(int i=0;i<l.length();i++){
            if(l[i]==r[i]&&l[i]=='8')
                ret++;
            if(l[i]!=r[i])
                break;
        }
    }
    cout<<ret;
}