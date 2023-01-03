#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

int cnt = 0;

int recursion(const char* s, int l, int r) {
    cnt++;
    if (l >= r) return 1;
    else if (s[l] != s[r]) return 0;
    else return recursion(s, l + 1, r - 1);
}

int isPalindrome(const char* s) {
    return recursion(s, 0, strlen(s) - 1);
}

int main() {
    int n = 0;

    int arr[1000][2] = { 0, };
    char* s=NULL;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> s;
        arr[i] = { isPalindrome(s),cnt };
        cnt = 0;
        s = NULL;
    }

    for (int i = 0; i < n; i++) {
        
        cout << arr[i][0] << " " << arr[i][1] << endl;
    }

}