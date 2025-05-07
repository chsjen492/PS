#include <iostream>
#include <vector>
using namespace std;

int a[1000001];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    vector<long long> v;
    
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    v.push_back(a[0]);
    
    for(int i=1;i<n;i++){
        if(v.back()<a[i]) v.push_back(a[i]);
        else {
            int idx = lower_bound(v.begin(), v.end(), a[i])-v.begin();
            v[idx] = a[i];
        }
    }
    
    cout<<v.size();
}