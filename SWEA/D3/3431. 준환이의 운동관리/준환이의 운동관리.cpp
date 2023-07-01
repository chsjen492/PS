#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	long long sum=0;
    long long L ,U, X;
	cin>>T;

	for(test_case = 1; test_case <= T; ++test_case)
	{

		cin>>L>>U>>X;
        if(X>=L&&X<=U)
            cout<<"#"<<test_case<<" 0\n";
        else if(X>U)
            cout<<"#"<<test_case<<" -1\n";
        else if(X<L)
            cout<<"#"<<test_case<<" "<<L-X<<"\n";


	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}