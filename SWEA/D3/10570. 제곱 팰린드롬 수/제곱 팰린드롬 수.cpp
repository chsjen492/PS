#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T, a, b;
    int cnt=0;
	int arr[5]={1,4,9,121,484}; //1부터 1000까지의 제곱 팰린드롬 수
	cin>>T;

	for(test_case = 1; test_case <= T; ++test_case)
	{
			cin>>a>>b;
        for(int i=0;i<5;i++){
            if(arr[i]>=a&&arr[i]<=b)
                cnt++;
        }
        cout<<"#"<<test_case<<" "<<cnt<<"\n";
        cnt=0;
		


	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}