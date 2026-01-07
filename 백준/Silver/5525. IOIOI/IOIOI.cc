#include <iostream>
#include <cstring>
using namespace std;

int main(){
    int n, m, ret=0;
    string s;
    cin>>n;
    cin>>m;
    cin>>s;
    
    string p = "IOI";
    for(int i=2;i<=n;i++){
        p+="OI";
    }
    
    int pSize = p.length();
    
    for(int i=0;i<m-pSize+1;i++){
        if(s.substr(i, pSize)==p) ret++;
    }
    cout<<ret;
}