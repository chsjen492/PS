#include <string>
#include <vector>
using namespace std;
bool visited[9];
vector<vector<int>> d;
int ret = -1;

void func(int hp, int cnt){
    for(int i=0;i<d.size();i++){
        if(visited[i]!=true){
            if(hp>=d[i][0]){
                visited[i]=true;
                func(hp-d[i][1], cnt+1);
                visited[i]=false;
            }  
        }
    }
    ret = max(ret, cnt);
    return;
}

int solution(int k, vector<vector<int>> dungeons) {
    d = dungeons;
    func(k, 0);
    return ret;
}