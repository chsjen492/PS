#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<vector<int>> edges) {
    vector<int> answer(4);
    int dots = 0;
    int num;
    int sum = 0;
    bool isDot[1000001];
    
    if(edges.size()==1){
        answer= {edges[0][0], 1, 1, 0};
        return answer;
    }
    
    // 최대 정점 번호 구하기
    for(int i=0;i<edges.size();i++){
        isDot[edges[i][0]] = true;
        isDot[edges[i][1]] = true;
        dots = max(dots, edges[i][0]);
        dots = max(dots, edges[i][1]);
    }
    
    vector<vector<int>> in(dots+1);
    vector<vector<int>> out(dots+1);
    
    // 들어오는 간선과 나가는 간선 저장
    for(int i=0;i<edges.size();i++){
        out[edges[i][0]].push_back(edges[i][1]);
        in[edges[i][1]].push_back(edges[i][0]);
    }
    
    // 생성 정점
    for(int i=1;i<=dots;i++){
        if(isDot[i]!=true) continue;
        if(in[i].size() == 0 && out[i].size()>=2){
            answer[0]=i;
            num = i;
            sum = out[i].size();
            for(int j=0;j<out[i].size();j++){
                in[out[i][j]].pop_back();
            }
            out[i].clear();
            break;
        }
    }
    
    int cnt = 0;
    
    // 막대
    for(int i=1;i<=dots;i++){
        if(i==num || isDot[i] != true) continue;
        if(in[i].size() == 0){
            cnt++;
        }
    }
    answer[2] = cnt;
    sum-=cnt;
    cnt = 0;
    
    // 8자
    for(int i=1;i<=dots;i++){
        if(i==num || isDot[i]!=true) continue;
        if(in[i].size() == 2 && out[i].size() == 2){
            cnt++;
            in[i].clear();
            out[i].clear();
        }
    }
    answer[3] = cnt;
    sum-=cnt;
    cnt = 0;
    
    answer[1] = sum;
    
    return answer;
}