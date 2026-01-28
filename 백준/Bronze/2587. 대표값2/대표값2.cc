#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, sum = 0;
    int arr[5] = {0};
    for(int i=0;i<5;i++){
        cin>>t;
        arr[i]=t;
        sum+=t;
    }
    sort(arr, arr+5);
    
    cout<<sum/5<<'\n';
    cout<<arr[2];
}