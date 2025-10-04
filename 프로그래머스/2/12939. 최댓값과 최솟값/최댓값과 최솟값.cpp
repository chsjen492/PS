#include <bits/stdc++.h>
using namespace std;

string solution(string s) {
    string answer = "";
    string tmp = "";
    vector<int> v;
    for(int i=0;i<s.length();i++){
        if(s[i] == ' '){
            v.push_back(stoi(tmp));
            tmp = "";
        }
        else {
            tmp+=s[i];
        }
    }
    if(tmp!="") v.push_back(stoi(tmp));
    sort(v.begin(), v.end());
    answer = to_string(v[0]) + " " + to_string(v.back());
    return answer;
}