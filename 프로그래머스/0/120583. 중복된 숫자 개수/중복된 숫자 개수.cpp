#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array, int n) {
    int answer = 0;
    int arr[1001]={0,};
    for(int i=0;i<array.size();i++){
        arr[array[i]]++;
    }
    answer=arr[n];
    return answer;
}