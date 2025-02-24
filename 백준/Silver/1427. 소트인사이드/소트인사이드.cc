#include <bits/stdc++.h>
using namespace std;

bool compare(char a, char b){
    return a>b;
}

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    string s;
    cin>>s;
    sort(s.begin(), s.end(), compare);
    cout<<s;
    
}