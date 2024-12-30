#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int arr[26];
    fill(arr, arr+27, -1);
    
    for(int i=0;i<s.length();i++){
        if(arr[s[i]-'a']==-1){
            arr[s[i]-'a']=i;
        }
    }
    
    for(auto x:arr){
        cout<<x<<" ";
    }
}