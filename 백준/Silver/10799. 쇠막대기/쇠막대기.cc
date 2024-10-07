#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long long ret=0;
    string silver;
    stack<char> s;
    
    cin>>silver;
    for(int i=0;i<silver.length();i++){
        if(silver[i]=='('){
            s.push(silver[i]);
        }
        else{
            if(silver[i-1]=='('){ //레이저
                s.pop();
                ret+=s.size();
            }
            else{
                s.pop(); //막대
                ret++;
            }
        }
    }
    cout<<ret;
}