#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin>>T;
    int a, b, c;

	for(test_case = 1; test_case <= T; ++test_case)
	{
		cin>>a>>b>>c;
        cout<<"#"<<test_case<<" ";
        if(a==b&&b==c)
            cout<<a<<"\n";
        if(a!=b&&a==c)
            cout<<b<<"\n";
        if(a==b&&a!=c)
            cout<<c<<"\n";
        if(b==c&&a!=b)
            cout<<a<<"\n";
		


	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}