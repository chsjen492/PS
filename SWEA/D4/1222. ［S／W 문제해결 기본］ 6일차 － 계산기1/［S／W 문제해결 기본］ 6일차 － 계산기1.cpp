#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T=10;
	int size;
    string n;
    int sum=0;

	for(test_case = 1; test_case <= T; ++test_case)
	{
		cin>>size>>n;
       	for(int i=0;i<n.length();i++){
            if(n[i]!='+')
                sum+=n[i]-'0';
        }
        cout<<"#"<<test_case<<" "<<sum<<"\n";
        sum=0;
		


	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}