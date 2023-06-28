#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	int A, B;
	cin>>T;

	for(test_case = 1; test_case <= T; ++test_case)
	{
		cin>>A>>B;
        if(A+B>=24)
            cout<<"#"<<test_case<<" "<<A+B-24<<"\n";
        else
            cout<<"#"<<test_case<<" "<<A+B<<"\n";
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}