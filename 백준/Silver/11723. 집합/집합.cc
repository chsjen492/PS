#include <iostream>
using namespace std;

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int arr[21]={0};
    
    int m, x;
    string s;
    cin>>m;
    
    for(int i=0;i<m;i++){
        cin>>s;
        if(s=="add"){
            cin>>x;
            arr[x]=1;
        }
        else if(s=="remove"){
            cin>>x;
            arr[x]=0;
        }
        else if(s=="check"){
            cin>>x;
            cout<<arr[x]<<'\n';
        }
        else if(s=="toggle"){
            cin>>x;
            arr[x] = arr[x] ? 0 : 1;
        }
        else if(s=="all"){
            fill(arr, arr+21, 1);
        }
        else {
            fill(arr, arr+21, 0);
        }
    }
    
}