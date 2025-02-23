#include <bits/stdc++.h>
using namespace std;
long long r = 4294967296;
bool isPrime[100000001];
long long ans = 1;
void eratos(int n){
    for(int i=2;i<=n;i++){
        isPrime[i]=true;
    }
    for(int i=2;i*i<=n;i++){
        if(isPrime[i]){
            for(int j=i*i;j<=n;j+=i){
                isPrime[j]=false;
            }
        }
    }
    
    for(int i=2;i<=n;i++){
        if(isPrime[i]){
            long long nn = i;
            while(nn*i<=n){
                nn*=i;
            }
            ans = ans*nn%r;
        }
    }
}
int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int n;
    cin>>n;
    eratos(n);
    cout<<ans;
}