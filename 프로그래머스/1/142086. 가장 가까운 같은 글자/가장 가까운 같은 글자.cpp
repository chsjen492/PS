#include <bits/stdc++.h>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    int arr[30] = {0};
    fill(arr, arr+30, -1);
    for(int i=0;i<s.length();i++){
        int idx = s[i]-97;
        cout<<idx<<" ";
        if(arr[idx]==-1){
            answer.push_back(-1);
        } else{
            answer.push_back(i-arr[idx]);
        }
        arr[idx] = i;
    }
    return answer;
}