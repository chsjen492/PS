#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int tmp = (s[0]-'0')-(s[1]-'0');
    for(int i=2;i<s.length();i++){
        if((s[i-1]-'0')-(s[i]-'0')!=tmp){
            cout<<"흥칫뿡!! <(￣ ﹌ ￣)>";
            return 0;
        }
        tmp = (s[i-1]-'0')-(s[i]-'0');
    }
    cout<<"◝(⑅•ᴗ•⑅)◜..°♡ 뀌요미!!";
}