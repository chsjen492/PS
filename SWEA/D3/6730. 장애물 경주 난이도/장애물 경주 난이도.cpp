#include<iostream>
#include <vector>
#include <cmath>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
    int N;

	cin>>T;
    vector<int> block;
    int upmax=0;
    int downmax=0;
    int tmp;
    int num;

	for(test_case = 1; test_case <= T; ++test_case)
	{
		cin>>N;
        for(int i=0;i<N;i++){
            cin>>num;
            if(i!=0){
                if(tmp>num){
                    if(downmax<abs(tmp-num))
                        downmax=abs(tmp-num);
                }
                if(tmp<num)
                    if(upmax<abs(tmp-num))
                        upmax=abs(tmp-num);
                tmp=num;
            }
            else
                tmp=num;
        }
        cout<<"#"<<test_case<<" "<<upmax<<" "<<downmax<<"\n";
        upmax=0;
        downmax=0;
            
			


	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}