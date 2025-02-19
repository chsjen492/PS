#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string p, in, first, last;
    
    cin>>n;
    cin>>p;
    
    int star = p.find('*');
    first = p.substr(0, star);
    last = p.substr(star+1, p.length());
    
    for(int i=0;i<n;i++){
        cin>>in;
        
        if(in.length()<first.length()+last.length()){
            cout<<"NE"<<'\n';
            continue;
        }
        
        string tmp1 = in.substr(0, first.length());
        string tmp2 = in.substr(in.length()-last.length(), in.length());
        
        if(tmp1==first && tmp2==last){
            cout<<"DA"<<'\n';
        }
        else {
            cout<<"NE"<<'\n';
        }
    }
}