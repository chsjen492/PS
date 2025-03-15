#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    string doc, keyword;
    int cnt = 0;
    getline(cin, doc);
    getline(cin, keyword);
    
    if (doc.length() < keyword.length()) {
        cout << 0;
        return 0;
    }
    
    for(int i=0;i<=doc.length()-keyword.length();i++){
        bool flag = true;
        for(int j=0;j<keyword.length();j++){
            if(doc[i+j]!=keyword[j]){
                flag=false;
                break;
            }
        }
        if(flag){
            cnt++;
            i+=keyword.length()-1;
        }
    }
    cout<<cnt;
}