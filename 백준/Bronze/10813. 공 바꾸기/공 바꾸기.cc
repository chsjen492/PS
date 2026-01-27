#include <iostream>
using namespace std;

int main()
{
    int n, m;
    int arr[101] = {0};
    
    cin>>n>>m;
    
    for(int i=1;i<=n;i++) arr[i]=i;
    
    while(m--){
        int i, j;
        cin>>i>>j;
        swap(arr[i], arr[j]);
    }
    
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }
}