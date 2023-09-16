#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(int argc, char** argv)
{
	int test_case;
	int T, num, tmp;
    int max=0;
    int score;

	cin>>T;

	for(test_case = 1; test_case <= T; ++test_case)
	{
		cin>>num;
        int arr[101]={0,};
        for(int i=0;i<1000;i++){
            cin>>tmp;
            arr[tmp]++;
        }
        for(int i=100;i>=0;i--){
            if(max<arr[i]){
                max=arr[i];
                score=i;
            }
        }
        cout<<"#"<<num<<" "<<score<<"\n";
		max=0;


	}
	return 0;
}