#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int n;
    string s;
    cin>>n>>s;
    
    string ret = "";
    
    for(int i=0;i<n;i++){
        if(s[i]=='I') ret+=tolower(s[i]);
        else ret+=toupper(s[i]);
    }
    
    cout<<ret;
}