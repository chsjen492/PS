#include<iostream>
#include <algorithm>
#include <stdlib.h>
#include <vector>
using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int N;
    int num;
	vector <long long> v;
	cin >> T;
    int min;
    int cnt=1;
    int idx=1;

	for(test_case = 1; test_case <= T; ++test_case)
	{

		cin >> N;
       	vector <long long> v;
        for(int i=0;i<N;i++){
            cin>>num;
			v.push_back(abs(num));
        }

        sort(v.begin(), v.end());
        min=v[0];
       	while(1){
            if(v[idx]!=min)
                break;
            else{
                idx++;
                cnt++;}
        }
        cout<<"#"<<test_case<<" "<<min<<" "<<cnt<<"\n";
		idx=1;
        cnt=1;

	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}