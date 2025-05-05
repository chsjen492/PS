#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    int a[1000001];
    
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    vector<int> v;
    v.push_back(a[0]);
    
    for(int i=1;i<n;i++){
        if(a[i]>v.back()) v.push_back(a[i]);
        else {
            int idx = lower_bound(v.begin(), v.end(), a[i])-v.begin();
            v[idx] = a[i];
        }
    }
    
    cout<<v.size();
}