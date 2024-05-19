#include <bits/stdc++.h>

using namespace std;

vector<int> solution(int start_num, int end_num) {
    vector<int> answer;
    int i;
    for(i=start_num; i>=end_num;i--){
        answer.push_back(i);
    }
    return answer;
}