#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
	int test_case;
	int T;
	
	cin>>T;

	for(test_case = 1; test_case <= T; ++test_case)
	{
		string s;
        int cnt = 0;
        int n;
        cin>>n;
        int farm[49][49];

        for(int i=0;i<n;i++){
            cin>>s;
            for(int j=0;j<n;j++){
                farm[i][j]=s[j]-'0';
            }
        }
        int middle = n/2;
        int idx = 0;
        for(int i=0;i<middle+1;i++){
            for(int j=middle-idx;j<=middle+idx;j++){
                cnt+=farm[i][j];
            }
            if(i!=middle)
            	idx++;
        }
        idx--;
        for(int i=middle+1;i<n;i++){
            for(int j=middle-idx;j<=middle+idx;j++){
                cnt+=farm[i][j];
            }
            idx--;
        }
        cout<<"#"<<test_case<<" "<<cnt<<'\n';

	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}