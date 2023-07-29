#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	int a=1;
    int b=1;
    string s;
	cin>>T;

	for(test_case = 1; test_case <= T; ++test_case)
	{

		cin>>s;
        for(int i=0;i<s.length();i++){
            if(s[i]=='L')
                b+=a;
            else
                a+=b;
        }
        cout<<"#"<<test_case<<" "<<a<<" "<<b<<"\n";
        a=1;
        b=1;


	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}