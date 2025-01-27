#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int sum = 0;
    
    for(int i=1;i<n;i++){
        sum=0;
        int num = i;
        while(num){
            sum+=num%10;
            num/=10;
        }
        if(i+sum==n){
            cout<<i;
            return 0;
        }
    }
    cout<<0;
}