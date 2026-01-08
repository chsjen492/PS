#include <iostream>
using namespace std;

int main(){
    int sum = 0;
    
    for(int i=0;i<5;i++){
        int t;
        cin>>t;
        if(t<40) sum+=40;
        else sum+=t;
    }
    
    cout<<sum/5;
}