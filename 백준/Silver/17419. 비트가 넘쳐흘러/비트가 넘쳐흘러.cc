#include <iostream>
using namespace std;

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int n, cnt=0;
    char c;
    cin>>n;
    
    for(int i=0;i<n;i++){
        cin>>c;
        if(c=='1'){
            cnt++;
        }
    }
    cout<<cnt;
}