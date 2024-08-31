#include <bits/stdc++.h>
using namespace std;

int solution(string s) {
    int answer = 0;
    
    for(int i=0;i<s.length();i++){
        bool correct = true;
        stack<int> st;
        for(int j=0;j<s.length();j++){
            if(s[j]=='('||s[j]=='{'||s[j]=='['){
                st.push(s[j]);
            }
            else{
                if(st.empty()){
                    correct=false;
                    break;
                }
                if(s[j]==')'&&st.top()=='('){
                    st.pop();
                    continue;
                }
                if(s[j]==']'&&st.top()=='['){
                    st.pop();
                    continue;
                }
                if(s[j]=='}'&&st.top()=='{'){
                    st.pop();
                    continue;
                }
                correct=false;
                break;
                
            }
        }
        if(!st.empty())
            correct=false;
        if(correct==true){
            answer++;
        }
        s = s.substr(1)+s[0];
    }
    return answer;
}