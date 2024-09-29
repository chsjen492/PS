#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    cin>>n;
    int original = n;
    int left, right, newInt=-1, cnt=0;
    
    while(newInt!=original){
        left = n%10;
        right = n < 10 ? n : (n / 10 + n % 10) % 10;

        
        newInt = left*10+right;
        n=newInt;
        cnt++;
    }
    
    cout<<cnt;
   
}