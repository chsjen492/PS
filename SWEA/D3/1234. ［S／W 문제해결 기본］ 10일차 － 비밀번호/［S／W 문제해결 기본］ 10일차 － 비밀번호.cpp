#include<iostream>
#include <cstring>
using namespace std;

int main(int argc, char** argv)
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
	int test_case;
	int T=10;
    int size;
    string s;
    int index=0;

	for(test_case = 1; test_case <= T; ++test_case)
	{

		cin>>size>>s;
        while(1){
            if(s[index]==s[index+1]){
                s.erase(index, 2);
                index=0;
                continue;
            }
            if(index+1==s.length()){
                index=0;
                break;
            }
            index++;
        }
        cout<<"#"<<test_case<<" "<<s<<"\n";

	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}