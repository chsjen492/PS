#include <bits/stdc++.h>
using namespace std;

int main(){
    double a, b;
    cin>>a>>b;
    
    double m = (b-a)/400;
    
    printf("%.20f",1/(1+pow(10, m)));
}