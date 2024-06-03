#include <bits/stdc++.h>

using namespace std;

int solution(int num1, int num2) {
    int answer = 0;
    double tmp = num1/(double)num2;
    tmp*=1000;
    answer=trunc(tmp);
    return answer;
}