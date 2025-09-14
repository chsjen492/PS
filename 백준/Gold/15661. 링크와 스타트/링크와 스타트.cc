#include <bits/stdc++.h>
using namespace std;
int arr[21][21];
bool used[21];
long long l = 0;
long long s = 0;
long long ret = 1e9;
int choose[21] = {0};;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    cin>>n;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    
    for(int i=1;i<=n/2;i++){
        fill(choose+i, choose+n, 1);
        do {
            l=0; s=0;
            for(int i = 0; i < n; i++){
                for(int j = i + 1; j < n; j++){
                    if(choose[i] == 0 && choose[j] == 0){
                        l += arr[i][j] + arr[j][i];
                    }
                    if(choose[i] == 1 && choose[j] == 1){
                        s += arr[i][j] + arr[j][i];
                    }
                }
        }
        ret = min(abs(l-s), ret);
        
        } while(next_permutation(choose, choose+n));
        fill(choose, choose+n, 0);
    }
    
    
    cout<<ret;
    
    
}