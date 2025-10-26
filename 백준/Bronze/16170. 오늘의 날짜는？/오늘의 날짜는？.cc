#include <bits/stdc++.h>
using namespace std;

int main(){
    time_t timer = time(NULL);
    struct tm* t = gmtime(&timer);
    
    cout<<t->tm_year+1900<<'\n'<<t->tm_mon+1<<'\n'<<t->tm_mday;
}