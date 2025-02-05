#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    string s;
    int num;
    
    for(int i=0;i<3;i++){
        cin>>s;
        
        if(s[0] == 'F' || s[0] == 'B')
            continue;
        
        num = stoi(s);
        num+=3-i;
        
        if(num%3==0&&num%5==0){
            cout<<"FizzBuzz";
            return 0;
        }
        else if(num%3==0){
            cout<<"Fizz";
            return 0;
        }
        else if (num%5==0){
            cout<<"Buzz";
            return 0;
        }
        else {
            cout<<num;
            return 0;
        }
    }
}