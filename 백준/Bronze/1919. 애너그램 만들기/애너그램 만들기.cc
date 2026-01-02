#include <bits/stdc++.h>
using namespace std;

int main(){
    map<char, int> m;
    string s1, s2;
    int ret = 0;
    cin>>s1>>s2;
    
    for(int i=0;i<s1.length();i++){
        m[s1[i]]++;
    }
    
    for(int i=0;i<s2.length();i++){
        m[s2[i]]--;
    }
    
    for(auto it: m){
        ret+=abs(it.second);
    }
    
    cout<<ret;
}