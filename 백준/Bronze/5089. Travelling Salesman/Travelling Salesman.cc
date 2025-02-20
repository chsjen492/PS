#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int n;
    int week = 1;
    string city;
    while(true){
        cin>>n;
        cin.ignore();
        if(n==0){
            return 0;
        }
        set<string> s;
        for(int i=0;i<n;i++){
            getline(cin, city);
            s.insert(city);
        }
        cout<<"Week "<<week<<" "<<s.size()<<'\n';
        week++;
    }
}