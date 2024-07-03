#include <string>
#include <bits/stdc++.h>

using namespace std;

int solution(int n, int k) {
    int answer = 0;
    k-=n/10;
    answer=k*2000+12000*n;
    return answer;
}