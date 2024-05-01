#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
    ios::sync_with_stdio(0);
    int compare;
    cin.tie(0);
	int test_case;
	int T=10;

	for(test_case = 1; test_case <= T; ++test_case)
	{
        int n;
        int cnt=0;
        bool success = true;
        cin>>n; //회문의 길이 입력
        
		string board[8];
       	for(int i=0;i<8;i++){
            cin>>board[i];       //글자판 입력
        }
        
        if(n==1){
            cout<<"#"<<test_case<<" "<<64<<"\n";
            continue;
        }

        for(int i=0;i<8;i++){
            for(int j=0;j<8-n+1;j++){
                success=true;
                compare = n-1;
                int idx = j;
                for(int k=0;k<n/2;k++){
                    if(board[i][idx]!=board[i][idx+compare]){
                        success = false;
                        break;
                    }
                    compare-=2;
                    idx++;
                }
                if(success==true)
               		cnt++;
            }
        }
        for(int i=0;i<8;i++){
            for(int j=0;j<8-n+1;j++){
                success=true;
                compare = n-1;
                int idx = j;
                for(int k=0;k<n/2;k++){
                    if(board[idx][i]!=board[idx+compare][i]){
                        success = false;
                        break;
                    }
                    compare-=2;
                    idx++;
                }
                if(success==true)
               		cnt++;
            }
        }
                    
		cout<<"#"<<test_case<<" "<<cnt<<"\n";
                

	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}