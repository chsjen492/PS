#include<iostream>
#include <cstring>
using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
    int size=0;
    string s;
    bool f=true;

	cin>>T;

	for(test_case = 1; test_case <= T; ++test_case)
	{
		cin>>s;
        size=s.length();
        for(int i=0;i<size/2;i++){
            if(s[i]!=s[size-1-i]){
                cout<<"#"<<test_case<<" "<<0<<"\n";
                f=false;
                break;
            }
        }
        if(f==true)
            cout<<"#"<<test_case<<" "<<1<<"\n";
        f=true;
        


	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}