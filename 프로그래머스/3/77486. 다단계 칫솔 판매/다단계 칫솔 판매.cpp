#include <bits/stdc++.h>
using namespace std;
map<string, string> family;
map<string, int> money;

void func(string seller, int m){
    if(m<10){
        money[seller]+=m;
        return;
    }
    money[seller]+=(m-(m/10));
    
    if(family[seller]!="-") func(family[seller], m/10);
}

vector<int> solution(vector<string> enroll, vector<string> referral, vector<string> seller, vector<int> amount) {
    vector<int> answer;
    
    // 부모-자식 연결
    for(int i=0;i<enroll.size();i++){
        family[enroll[i]]=referral[i];
    }
    
    // 판매금 초기화
    for(int i=0;i<enroll.size();i++){
        money[enroll[i]] = 0;
    }
    
    // 수익금 계산
    for(int i=0;i<seller.size();i++){
        func(seller[i], amount[i]*100);
    }
    
    // 정답 반환
    for(int i=0;i<enroll.size();i++){
        answer.push_back(money[enroll[i]]);
    }

    return answer;
}