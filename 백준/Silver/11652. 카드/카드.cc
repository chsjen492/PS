#include <bits/stdc++.h>
using namespace std;

bool comp(pair<long long, long long>& a, pair<long long, long long>& b){
    if (a.second == b.second) {
        return a.first < b.first;
    }
    
    return a.second>b.second;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    long long tmp;
    map<long long, long long> m;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>tmp;
        m[tmp]++;
    }
    
    vector<pair<long long, long long>> v(m.begin(), m.end());
    sort(v.begin(), v.end(), comp);
    
    cout<<v[0].first;
}