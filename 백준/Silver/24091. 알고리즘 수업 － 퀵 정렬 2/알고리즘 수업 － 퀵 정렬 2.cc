#include <bits/stdc++.h>
using namespace std;
int n, k;
int cnt = 0;

int partition(int arr[], int p, int r){
    int x = arr[r];
    int i = p-1;
    for(int j=p;j<=r-1;j++){
        if(arr[j]<=x){
            swap(arr[++i], arr[j]);
            if(++cnt==k){
                for(int i=0;i<n;i++){
                    cout<<arr[i]<<" ";
                }
                exit(0);
            }
        }
    }
    if(i+1!=r){
        swap(arr[i+1], arr[r]);
        if(++cnt==k){
            for(int i=0;i<n;i++){
                cout<<arr[i]<<" ";
            }
            exit(0);
        }
    }
    return i+1;
}

void quick_sort(int arr[], int p, int r){
    if(p<r){
        int q = partition(arr, p, r);
        quick_sort(arr, p, q-1);
        quick_sort(arr, q+1, r);
    }
}

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int arr[10001];
    
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    quick_sort(arr, 0, n-1);
    
    cout<<-1;
}