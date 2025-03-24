#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n, t;
    vector<int> v;
    
    cin>>n;
    if(n==0){
        cout<<0;
        return 0;
    }
    
    for(int i=0;i<n;i++){
        cin>>t;
        v.push_back(t);
    }
    sort(v.begin(), v.end());
    
    int tmp = round(n*0.15);
    double sum = 0;
    for(int i=tmp;i<n-tmp;i++){
        sum+=v[i];
    }
    
    int avg = round(sum/(n-2*tmp));
    cout<<avg;
}