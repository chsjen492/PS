#include <bits/stdc++.h>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    map<string, int> m;
    for(int i=0;i<participant.size();i++){
        if(m.end()==m.find(participant[i])){
            m.insert({participant[i], 1});
        }
        else m[participant[i]]++;
    }
    
    for(int i=0;i<completion.size();i++){
        m[completion[i]]--;
    }
    
    for(auto p:participant){
        if(m[p]>0){
            answer = p;
            break;
        }
    }
    return answer;
}