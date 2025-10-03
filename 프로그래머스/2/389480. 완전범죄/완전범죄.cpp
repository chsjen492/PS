#include <bits/stdc++.h>
using namespace std;

bool compare(vector<int>&a, vector<int>&b){
    if(a[0]-a[1]==b[0]-b[1]) return a[0]/a[1]>b[0]/b[1];
    return a[0]-a[1]>b[0]-b[1];
}

int solution(vector<vector<int>> info, int n, int m) {
    sort(info.begin(), info.end(), compare);
    
    int a = 0;
    int b = 0;
    
    for(int i=0;i<info.size();i++){
        int tmp1 = info[i][0];
        int tmp2 = info[i][1];
        
        if(m-b>tmp2) b+=tmp2;
        else if (n-a>tmp1) a+=tmp1;
        else return -1;
    }
    return a;
}