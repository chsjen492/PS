#include <bits/stdc++.h>
using namespace std;

int main()
{
    string od;
    int a=1, b=0, c=0;
    
    cin>>od;
    for(int i=0;i<od.length();i++){
        if(od[i]=='A'){
            swap(a, b);
        }
        if(od[i]=='B'){
            swap(b, c);
        }
        if(od[i]=='C'){
            swap(a, c);
        }
    }
    
    if(a==1) cout<<1;
    if(b==1) cout<<2;
    if(c==1) cout<<3;
}