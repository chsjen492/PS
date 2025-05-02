#include <iostream>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    int n;
    int arr[100002];
    bool num[100002]={};
    
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    long long ret = 0;
    int st = 0;
    int ed = 0;
    while(st<n){
        while(ed<n&&!num[arr[ed]]){
            num[arr[ed]] = true;
            ed++;
        }
        num[arr[st]]=false;
        ret+=ed-st;
        st++;
    }
    cout<<ret;
}