#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int idx = 1;
    while(idx<=n){
        int tmp = 0;
        for(int i=idx;i<=n;i++){
            tmp+=i;
            if(tmp==n){
                answer++;
                break;
            }
            else if(tmp>n){
                break;
            }
        }
        idx++;
    }
    return answer;
}