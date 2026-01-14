#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int n;
    string s;
    cin>>n;
    
    vector<string> v1;
    vector<string> v2;
    vector<string> v3;
    
    for(int i=0;i<n;i++){
        cin>>s;
        v1.push_back(s);
    }
    
    v2 = v1;
    
    sort(v2.begin(), v2.end());
    v3 = v2;
    reverse(v3.begin(), v3.end());
    
    if(v1==v2) {cout<<"INCREASING"; return 0;}
    else if (v3 == v1){ cout<<"DECREASING"; return 0;}
    else cout<<"NEITHER";
}