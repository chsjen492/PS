#include <iostream>
using namespace std;

int main(){
    int t, n, k;
    
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>k>>n;
        int arr[15][15];
        
        for(int j=0;j<=k;j++){
            for(int h=1;h<=n;h++){
                if(j==0){
                    arr[j][h]=h;
                }
                else if(h==1){
                    arr[j][h]=1;
                }
                else {
                    arr[j][h]=arr[j-1][h]+arr[j][h-1];
                }
            }
        }
        cout<<arr[k][n]<<'\n';
    }
}