#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    string s;
    cin>>s;
    
    for(int i=0;i<s.length()-3;i++){
        if(s.substr(i, 4)=="gori"){
            cout<<"YES";
            return 0;
        }
    }
    
    cout<<"NO";
}