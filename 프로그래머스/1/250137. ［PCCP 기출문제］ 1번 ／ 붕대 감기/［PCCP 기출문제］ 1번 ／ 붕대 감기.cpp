#include <string>
#include <vector>

using namespace std;

int solution(vector<int> bandage, int health, vector<vector<int>> attacks) {
    int answer = health;
    int t = bandage[0];
    int x = bandage[1];
    int y = bandage[2];
    
    int time=1;
    int cnt = 0;
    int idx = 0;
    
    while(idx<attacks.size()){
        if(time!=attacks[idx][0]){
            time++;
            cnt++;
            if(answer<health){
                if(cnt==t){
                    answer+=y;
                    cnt=0;
                }
                answer+=x;
                if(answer>health)
                    answer=health;
            }
        }
        else {
            time++;
            cnt=0;
            answer-=attacks[idx][1];
            if(answer<=0){
                return -1;
            }
            idx++;
        } 
    }
    return answer;
}