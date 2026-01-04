#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int arr[27]={0};
    
    cin>>s;
    for(int i=0;i<s.length();i++){
        arr[s[i]-'a']++;
    }
    
    for(int i=0;i<26;i++){
        cout<<arr[i]<<" ";
    }
}