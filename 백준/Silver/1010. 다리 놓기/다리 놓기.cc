#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t, n, m;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n>>m;
        long long answer = 1;
        int k = 1;
        
        for(int j=m;j>m-n;j--){
            answer*=j;
            answer/=k;
            k++;
        }
        cout<<answer<<"\n";
    }
}