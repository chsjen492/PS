#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

int main(){
    int l, r = 31;
    long long ret = 0, tmp = 1,  m = 1234567891;
    string s;
    cin>>l;
    cin>>s;
    
    for(int i=0;i<l;i++){
        ret=(ret+((s[i]-96)*tmp))%m;
        tmp = (tmp*r)%m;
    }
    cout<<ret;
}