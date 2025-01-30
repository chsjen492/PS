#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int n;
    cin>>n;
    
    int i = 666;
    int res = 0;
    string s;
    
    while(true){
        s = to_string(i);
        for(int j=0;j<s.length()-2;j++){
            if(s[j]=='6'&&s[j+1]=='6'&&s[j+2]=='6'){
                res++;
                if(res==n){
                    cout<<i;
                    return 0;
                }
                break;
            }
        }
        i++;
    }
}