#include<iostream>
#include <map>
#include <algorithm>
using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin>>T;
    int N, K;
    int n;

	for(test_case = 1; test_case <= T; ++test_case)
	{
		cin>>N>>K;
        map<int, int> m;
        for(int i=1;i<=N;i++){
            m.insert({i,0});
        }
        for(int i=0;i<K;i++){
            cin>>n;
            m.erase(n);
        }
        cout<<"#"<<test_case<<" ";
        for(auto x:m){
            cout<<x.first<<" ";
        }
        cout<<"\n";
            
       


	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}