#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin>>T;
    string memory;

    int size=0;
    int cnt=0;
    int idx=0;
	
	for(test_case = 1; test_case <= T; ++test_case)
	{
		cin>>memory;
        bool allzero=true;
        int idx=0;
        size=memory.length();
        for(int i=0;i<size;i++){
            if(memory[i]=='1'){
                idx=i;
                cnt++;
                allzero=false;
                break;
            }
        }
        if(allzero==true){
            cout<<"#"<<test_case<<" "<<cnt<<"\n";
            continue;
        }
            
        for(int i=idx;i<size-1;i++){
                if(memory[i]!=memory[i+1]){
                    cnt++;
                }
            }

        cout<<"#"<<test_case<<" "<<cnt<<"\n";
        cnt=0;
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}