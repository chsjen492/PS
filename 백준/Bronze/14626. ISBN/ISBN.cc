#include <iostream>
using namespace std;

int main(){
    string s;
    cin>>s;
    
    int sum = 0;
    int num = 0;
    bool isEven = false;
    
    for(int i=0;i<s.length();i++){
        if(s[i]=='*'){
            if((i+1)%2==0) isEven = true;
            continue;
        }
        if((i+1)%2==0){
            sum+=(s[i]-'0')*3;
        }
        else {
            sum+=s[i]-'0';
        }
    }
    
    if(isEven){
        for(int i=0;i<10;i++){
            if((sum+(i*3))%10==0){
                cout<<i;
                return 0;
            }
        }
    } else {
        for(int i=0;i<10;i++){
            if((sum+i)%10==0){
                cout<<i;
                return 0;
            }
        }
    }
}