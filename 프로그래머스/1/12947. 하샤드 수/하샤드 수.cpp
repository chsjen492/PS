#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    bool answer = true;
    int num=x;
    int sum=0;
    if(x<10){
        sum=num;
    }
    else{
        while(num>0){
            sum+=num%10;
            num-=(num%10);
            num/=10;
        }
    }
    if(x%sum==0){
        answer=true;
    }
    else
        answer=false;
    return answer;
}