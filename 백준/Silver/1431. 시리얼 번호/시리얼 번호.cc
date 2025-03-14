#include <bits/stdc++.h>
using namespace std;

bool compare(string a, string b){
    if(a.size()!=b.size())
        return a.size()<b.size();
    else {
        int a_sum = 0;
        int b_sum = 0;
        
        for(int i=0;i<a.size();i++){
            if(a[i]>='0'&&a[i]<='9'){
                a_sum+=(a[i]-'0');
            }
        }
        
        for(int i=0;i<b.size();i++){
            if(b[i]>='0'&&b[i]<='9'){
                b_sum+=(b[i]-'0');
            }
        }
        
        if(a_sum!=b_sum){
            return a_sum<b_sum;
        }
        return a<b;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin>>n;
    string s[51];
    
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    sort(s, s+n, compare);
    for(int i=0;i<n;i++){
        cout<<s[i]<<'\n';
    }
    
    
}