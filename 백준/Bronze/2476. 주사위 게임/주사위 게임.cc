#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int a, b, c;
    vector<int> v;
    
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a>>b>>c;
        if(a==b && b==c){
            v.push_back(10000+a*1000);
        }
        else if((a==b && b!=c) || (a==c && a!=b) || (b==c && a!=b)) {
            if(a==b){
                v.push_back(1000+a*100);
            }
            if(a==c){
                v.push_back(1000+a*100);
            }
            if(b==c){
                v.push_back(1000+b*100);
            }
        }
        else {
            v.push_back(max((max(a, b)), c)*100);
        }
    }
    
    sort(v.begin(), v.end());
    cout<<v[n-1];
}