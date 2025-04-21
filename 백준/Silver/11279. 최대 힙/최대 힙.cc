#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    priority_queue<int, vector<int>> pq;
    int n, x;
    cin>>n;
    
    for(int i=0;i<n;i++){
        cin>>x;
        if(x>0){
            pq.push(x);
        }
        else {
            if(pq.empty()){
                cout<<"0\n";
            }
            else {
                cout<<pq.top()<<'\n';
                pq.pop();
            }
            
        }
    }
}