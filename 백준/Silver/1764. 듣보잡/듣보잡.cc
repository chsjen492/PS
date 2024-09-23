#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    map<string, int> mp;
    vector<string> answer;
    int n, m, ret=0;
    string s;
    cin>>n>>m;
    
    for(int i=0;i<n;i++){
        cin>>s;
        mp.insert({s, 1});
    }
    
    for(int i=0;i<m;i++){
        cin>>s;
        if(mp.find(s)!=mp.end()){
            ret++;
            answer.push_back(s);
        }
    }
    
    sort(answer.begin(), answer.end());
    
    cout<<ret<<'\n';
    for(auto a: answer){
        cout<<a<<'\n';
    }
}