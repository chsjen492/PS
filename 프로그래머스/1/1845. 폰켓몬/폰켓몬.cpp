#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> nums)
{
    int answer = 0;
    int choose = nums.size()/2;
    map<int, int> m;
    for(int i=0;i<nums.size();i++){
        if(m.end()==m.find(nums[i])){
            m.insert({nums[i], 1});
        }
        else{
            m[nums[i]]++;
        }
    }
    answer = min((int)m.size(), choose);
    return answer;
}