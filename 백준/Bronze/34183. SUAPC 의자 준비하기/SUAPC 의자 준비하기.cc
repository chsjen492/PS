#include <iostream>
using namespace std;

int main(){
    long long ret = 0;
    long long need = 0;
    
    int n, m, a, b;
    cin>>n>>m>>a>>b;
    need = n*3;
    if(need>m){
        cout<<(need-m)*a+b;
    }
    else cout<<0;
}