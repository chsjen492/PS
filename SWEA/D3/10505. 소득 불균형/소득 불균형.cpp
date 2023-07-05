#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
    int N;
    int income;
    int sum=0;
    int ave=0;
    int cnt=0;
	cin>>T;

	for(test_case = 1; test_case <= T; ++test_case)
	{

		cin>>N;
        vector<int> v;
        for(int i=0;i<N;i++){
            cin>>income;
            sum+=income;
            v.push_back(income);
        }
        ave=sum/N;
        for(int i=0;i<N;i++){
            if(v[i]<=ave)
				cnt++;
        }
        cout<<"#"<<test_case<<" "<<cnt<<"\n";
        ave=0;
        sum=0;
        cnt=0;

	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}