#include<iostream>
#include<string>
#include <vector>
using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	string s;
	cin>>T;

	for(test_case = 1; test_case <= T; ++test_case)
	{

		cin>>s;
        cout<<"#"<<test_case<<" ";
        for(int i=s.length()-1;i>=0;i--){
            if(s[i]=='b')
                cout<<'d';
             if(s[i]=='d')
                cout<<'b';
             if(s[i]=='p')
                cout<<'q';
             if(s[i]=='q')
                cout<<'p';
        }
        cout<<"\n";

	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}