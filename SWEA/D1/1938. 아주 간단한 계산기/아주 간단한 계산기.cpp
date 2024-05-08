#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T=1;
	
	for(test_case = 1; test_case <= T; ++test_case)
	{

		int a, b;
        cin>>a>>b;
        cout<<a+b<<'\n'<<a-b<<'\n'<<a*b<<'\n'<<a/b;


	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}