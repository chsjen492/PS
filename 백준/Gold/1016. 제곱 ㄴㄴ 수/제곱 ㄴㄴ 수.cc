#include <bits/stdc++.h>
using namespace std;
long long mn, mx;
bool arr[1000001] = {};

void eratos(){
    int cnt = 0;
    
    for(long long i=2;i*i<=mx;i++){
        long long n = mn/(i*i); // 가장 작은 배수 찾기 -> n*i*i부터 시작해서 제곱수로 나눠지는 수를 찾는다
        if(mn%(i*i)) // n이 나눠 떨어지면 n*i*i가 mn보다 작을 수 있으므로 1을 더한다
            n++;
        while(i*i*n<=mx){
            arr[i*i*n-mn]=true; // 제곱수로 나눠지는 수들 표시
            n++;
        }
    }
    
    for(int i=0;i<=mx-mn;i++){
        if(!arr[i]) cnt++;
    }
    
    cout<<cnt;
}

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    cin>>mn>>mx;
    
    eratos();
}