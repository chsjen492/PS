#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    long long x, y;
    cin>>x>>y;
    int z = y*100/x;
    long long st = 1, ed = 1000000000;
    
    if(z>=99) {
        cout<<-1;
        return 0;
    }
    
    while(st<=ed){
        long long mid = (st+ed)/2;
        
        int tmp = (y+mid)*100/(x+mid);
        if(tmp>z){
            ed = mid-1;
        }
        else st = mid+1;
    }
    
    cout<<st;
}