#include<bits/stdc++.h>
using namespace std;

bool solution(string s)
{
    bool answer = true;
    
    queue<char> q;
    for(int i=0;i<s.length();i++){
        if(s[i]=='('){
            q.push(s[i]);
        }
        else if(s[i]==')'){
            if(q.empty()){
                answer = false;
                break;
            }
            else{
                q.pop();
            }
        }
    }
    if(!q.empty()) answer = false;

    return answer;
}