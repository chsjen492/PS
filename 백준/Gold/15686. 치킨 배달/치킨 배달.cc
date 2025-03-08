#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, m;
    int city[51][51];
    vector<pair<int, int>> chicken;
    vector<pair<int, int>> home;
    
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>city[i][j];
            if(city[i][j]==2){
                chicken.push_back({i,j});
            }
            else if(city[i][j]==1){
                home.push_back({i,j});
            }
        }
    }
    int mn = 987654321;
    vector<int> tmp(chicken.size(), 1);
    fill(tmp.begin(), tmp.begin()+chicken.size()-m, 0);
    do{
        int dist = 0;
        for(int i=0;i<home.size();i++){
            int tmp2 = 987654321;
            for(int j=0;j<chicken.size();j++){
                if(tmp[j]==1){
                    tmp2=min(tmp2, abs(chicken[j].first-home[i].first)+abs(chicken[j].second-home[i].second));
                }
            }
            dist+=tmp2;
        }
        mn = min(dist, mn);
    } while(next_permutation(tmp.begin(), tmp.end()));
    cout<<mn;
}