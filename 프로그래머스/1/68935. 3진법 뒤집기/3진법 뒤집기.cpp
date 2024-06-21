#include <bits/stdc++.h>

using namespace std;

int solution(int n) {
    int answer = 0;
    vector <int> v;
    while(true){
        if(n>2){
            v.push_back(n%3);
            n/=3;
            
        }
        else{
            v.push_back(n);
            break;
        }
    }
    int idx=0;
    for(int i=v.size()-1;i>=0;i--){
        answer+=(pow(3, idx)*v[i]);
        idx++;
    }
    
    
    return answer;
}