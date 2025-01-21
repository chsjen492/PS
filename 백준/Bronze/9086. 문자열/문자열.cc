#include <iostream>
#include <cstring>
using namespace std;

int main(){
    int t;
    string s;
    cin>>t;
    
    for(int i=0;i<t;i++){
        cin>>s;
        
        if(s.length()==1){
            cout<<s<<s<<'\n';
        }
        else {
            cout<<s[0]<<s[s.length()-1]<<'\n';
        }
    }
}