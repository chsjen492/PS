#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int a[101][10001];
int n, m;

void compress(int arr[]){
    vector<int> tmp(arr, arr+n);
    sort(tmp.begin(), tmp.end());
    tmp.erase(unique(tmp.begin(), tmp.end()), tmp.end());
    
    for(int i=0;i<n;i++){
        arr[i] = lower_bound(tmp.begin(), tmp.end(), arr[i])-tmp.begin();
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    cin>>m>>n;
    
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
        compress(a[i]);
    }
    
    int ret = 0;
    for(int i=0;i<m;i++){
        for(int j=i+1;j<m;j++){
            bool flag = true;
            for(int k=0;k<n;k++){
                if(a[i][k]!=a[j][k]) {
                    flag=false;
                    break;
                }
            }
            if(flag) ret++;
        }
    }
    
    cout<<ret;
    
}