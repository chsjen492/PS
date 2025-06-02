#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    int tmp[101];
    for(int t=0;t<commands.size();t++){
        int i = commands[t][0];
        int j = commands[t][1];
        int k = commands[t][2];
        for(int x=0;x<j-i+1;x++){
            tmp[x] = array[x+i-1];
        }
        sort(tmp, tmp+j-i+1);
        answer.push_back(tmp[k-1]);
    }
    return answer;
}