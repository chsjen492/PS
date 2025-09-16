#include <bits/stdc++.h>
using namespace std;
set<int> my, turn;
int n;
int answer= 1;

bool canSubmit(set<int>& a, set<int>& b)
{
    for (int x : a)
    {
        int target =n+1 - x;
        if (b.find(target) != b.end()){
            a.erase(x);
            b.erase(target);
            return true;
        }
    }
    return false;
}


int solution(int coin, vector<int> cards) {
    set<int> my;
    set<int> pickup;
    n = cards.size();
    int answer = 1;
    
    for (int i = 0; i < n / 3; i++) my.insert(cards[i]);
    
    for (int i = n/3; i < n; i += 2)
    {
        pickup.insert(cards[i]);
        pickup.insert(cards[i+1]);
        
        if (canSubmit(my, my)){}
        else if(coin>=1 && canSubmit(my, pickup)) coin--;
        else if(coin>=2 && canSubmit(pickup, pickup)) coin -=2;
        else break;
        
        answer++;
    }
    
    return answer;
}