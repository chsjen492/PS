#include <iostream>
using namespace std;

int main(){
    long long n, m;
    cin>>n>>m;
    (n-1)%(m+1)!=0 ? cout<<"Can win" : cout<<"Can't win";
}