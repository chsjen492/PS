#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, t;
    cin>>s>>t;
    for(int i=0;i<s.length();i++){
        t.erase(remove(t.begin(), t.end(), s[i]), t.end());
    }
    cout<<t;
    return 0;
}