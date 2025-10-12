#include <bits/stdc++.h>

using namespace std;

int solution(string t, string p) {
    int answer = 0;
    int size = p.length();
    vector<string> v;
    for(int i=0;i<=t.length()-size;i++){
        string word = "";
        for(int j=i;j<i+size;j++){
            word+=t[j];
        }
        v.push_back(word);
    }
    sort(v.begin(), v.end());
    
    for(int i=0;i<v.size();i++){
        if(v[i]<=p){
            answer++;
        }
    }
    return answer;
}