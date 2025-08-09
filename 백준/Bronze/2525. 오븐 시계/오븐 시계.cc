#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int a, b, c;
    cin>>a>>b>>c;
    
    b +=c;
    
    cout<<(a+(b/60))%24<<" "<<b%60;
}