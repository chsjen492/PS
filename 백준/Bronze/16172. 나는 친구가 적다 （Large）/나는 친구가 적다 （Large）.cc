#include <bits/stdc++.h>
using namespace std;

int main(){
    string s, k;
    cin>>s>>k;
    
    string tmp = "";
    bool ret = 0;
    for(int i=0;i<s.length();i++){
        if(!(s[i]>='0'&&s[i]<='9')) tmp+=s[i];
    }
    
    tmp.find(k) != string::npos ? ret =1 : ret = 0;
    cout<<ret;
}