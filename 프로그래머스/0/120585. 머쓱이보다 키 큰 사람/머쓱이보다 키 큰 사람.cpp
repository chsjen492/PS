#include <bits/stdc++.h>

using namespace std;

int solution(vector<int> array, int height) {
    int answer = 0;
    sort(array.begin(), array.end());
    for(int i=array.size()-1;i>=0;i--){
        if(height<array[i]){
            answer++;
        }
        else
            break;
    }
    return answer;
}