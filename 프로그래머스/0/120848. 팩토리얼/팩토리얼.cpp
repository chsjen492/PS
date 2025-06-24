#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 1;
    for(int i=2;;i++){
        answer*=i;
        if(n<answer) return i-1;
    }
}