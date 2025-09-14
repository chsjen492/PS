#include <string>
#include <vector>

using namespace std;

long long solution(int cap, int n, vector<int> deliveries, vector<int> pickups) {
    long long answer = 0;
    // 각각 필요한 픽업, 배달의 크기
    int p = 0, d = 0;
    
    for(int i=n-1;i>=0;i--){
        p+=pickups[i];
        d+=deliveries[i];
        
        while(p>0 || d>0){
            answer+=(long long)(i+1)*2;
            
            p-=cap;
            d-=cap;
        }
    }
    
    return answer;
}