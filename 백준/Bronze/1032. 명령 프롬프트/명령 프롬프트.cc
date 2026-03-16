#include <iostream>
using namespace std;

int main()
{
    char c[51];
    
    int n;
    cin>>n;
    string in;
    
    for(int i=0;i<n;i++){
        cin>>in;
        for(int j=0;j<in.length();j++){
            if(i==0) c[j] = in[j];
            else {
                if(c[j]!=in[j]) c[j]='?';
            }
        }
    }
    
    for(int i=0;i<in.length();i++){
        cout<<c[i];
    }

    return 0;
}