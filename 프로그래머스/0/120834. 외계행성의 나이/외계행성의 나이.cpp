#include <bits/stdc++.h>

using namespace std;

string solution(int age) {
    string answer = "";
    while (age > 0) {
        int tmp = age % 10;         
        answer += (tmp + 'a');      
        age /= 10;                    
    }
    reverse(answer.begin(), answer.end()); 
    return answer;
}