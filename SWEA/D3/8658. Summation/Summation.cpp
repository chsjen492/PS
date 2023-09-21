#include<iostream>
#include<algorithm>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
    string s;
    int tmp=0;


	cin>>T;
	
	for(test_case = 1; test_case <= T; ++test_case)
	{
		    int sum[10]={0,};
		for(int i=0;i<10;i++){
            cin>>s;
            for(int j=0;j<s.length();j++){
                tmp+=(s[j]-'0');
            }
            sum[i]=tmp;
            tmp=0;
        }
        sort(sum,sum+10);
        cout<<"#"<<test_case<<" "<<sum[9]<<" "<<sum[0]<<"\n";


	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}