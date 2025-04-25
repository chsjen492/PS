#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    vector<int> a;
    int b[500001];
    
    int n1, n2, tmp;
    
    cin>>n1>>n2;
    for(int i=0;i<n1;i++){
        cin>>tmp;
        a.push_back(tmp);
    }
    for(int i=0;i<n2;i++){
        cin>>b[i];
    }
    
    sort(a.begin(), a.end());
    sort(b, b+n2);
    
    vector<int> v;
    for(int i=0;i<a.size();i++){
        if(!binary_search(b, b+n2, a[i])){
            v.push_back(a[i]);
        }
    }

    cout<<v.size()<<'\n';
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}