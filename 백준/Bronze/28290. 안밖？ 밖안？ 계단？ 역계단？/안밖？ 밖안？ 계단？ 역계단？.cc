#include <bits/stdc++.h>
using namespace std;

int main(){
    map<string, string> m;
    m["fdsajkl;"] = "in-out";
    m["jkl;fdsa"] = "in-out";
    m["asdf;lkj"] = "out-in";
    m[";lkjasdf"] = "out-in";
    m["asdfjkl;"] = "stairs";
    m[";lkjfdsa"] = "reverse";
    
    string s;
    cin>>s;
    if(m.find(s)!=m.end()) cout<<m[s];
    else cout<<"molu";
    
}