#include <bits/stdc++.h>
using namespace std;

int func (int a, int b){
    int n = 0;
    int ret = 0;
    int cur = pow(2, n)-1;
    
    while(cur<=a+b){
        if(cur<=a&&cur<=b){
            ret+=cur+1;
        }
        else if(cur<=a && cur>b){
            ret+=b+1;
        }
        else if (cur>a && cur<= b){
            ret+=a+1;
        }
        else{
            ret+=(a+b)-cur+1;
        }
        cur = pow(2, ++n)-1;
    }
    return ret;
}
int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int t;
    cin>>t;
    
    for(int i=0;i<t;i++){
        int a, b;
        cin>>a>>b;
        cout<<func(a, b)<<'\n';
    }
    
}