#include<iostream>
#include <map>
using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
    string s;
    int cnt=0;

	cin>>T;
	
	for(test_case = 1; test_case <= T; ++test_case)
	{
        map<char, int> m;
		cin>>s;
        for(int i=0;i<s.length();i++){
            m[s[i]]++;
        }
        for(auto x:m){
            cnt++;
        }
        cout<<"#"<<test_case<<" "<<cnt<<"\n";
        cnt=0;
		


	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}