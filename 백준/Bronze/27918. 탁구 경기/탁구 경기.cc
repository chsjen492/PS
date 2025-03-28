#include <iostream>
using namespace std;

int main(){
    int n, d=0, p=0;
    char winner;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>winner;
        
        if(abs(d-p)<2){
            if(winner=='D') d++;
            else p++;
        }
    }
    cout<<d<<":"<<p;
}