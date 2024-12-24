#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    
    if(n==0){
        cout<<1;
        return 0;
    }
    else{
        int sum = 1;
        for(int i=n;i>=1;i--){
            sum*=i;
        }
        cout<<sum;
    }
}