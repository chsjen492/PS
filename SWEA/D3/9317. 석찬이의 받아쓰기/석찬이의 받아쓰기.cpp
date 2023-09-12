#include<iostream>
#include <string>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T, size;
    int cnt=0;
    string a, b;

	cin>>T;

	for(test_case = 1; test_case <= T; ++test_case)
	{
		cin>>size;
        cin>>a;
        cin>>b;
		for(int i=0;i<size;i++){
            if(a[i]==b[i])
                cnt++;
        }
        cout<<"#"<<test_case<<" "<<cnt<<"\n";
        cnt=0;


	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}