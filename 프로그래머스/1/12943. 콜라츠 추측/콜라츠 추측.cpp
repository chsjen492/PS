#include <string>
#include <vector>

using namespace std;
long long func(long long a, int cnt){
    if(cnt>=500){;
        return -1;
    }
    if(a==1){
        return cnt;
    }
    else if(a%2==0){
        return func(a/2, cnt+1);
    }
    else if(a%2!=0){
        return func((a*3)+1, cnt+1);
    }

}
int solution(int num) {
    int answer = 0;
    if(num==1){
        return answer;
    }
    answer=func(num, 0);
    return answer;
}