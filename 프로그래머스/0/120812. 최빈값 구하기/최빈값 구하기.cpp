#include <bits/stdc++.h>

using namespace std;

int solution(vector<int> array) {
    int freq[1001]={0,};
    
    for (int num : array) {
        freq[num]++;
    }
    
    int max_frequency = *max_element(freq, freq+1001);
    int max_index = max_element(freq, freq+1001)-freq;
    bool multi = false;
    
    for(int i=0;i<1000;i++){
        if(i!=max_index&&max_frequency==freq[i]){
            multi=true;
            break;
        }
    }

    if(multi)
        return -1;
    else{
        return max_index;
    }
}