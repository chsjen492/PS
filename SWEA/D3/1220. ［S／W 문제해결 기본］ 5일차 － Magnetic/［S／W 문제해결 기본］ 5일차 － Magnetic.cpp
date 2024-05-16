#include<iostream>
#include<queue>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T = 10;
	
	for(test_case = 1; test_case <= T; ++test_case)
	{

		int table;
        int cnt=0;
        cin>>table;
        
        int board[100][100];
        int prev=0;
        
        for(int i=0;i<100;i++){
            for(int j=0;j<100;j++){
                cin>>board[i][j];
            }
        }

        for(int i=0;i<100;i++){
            for(int j=0;j<100;j++){
                if(prev==1&&board[j][i]==2){
                    cnt++;
                    prev=2;
                }
                if(board[j][i]==1){
                    prev=1;
                }
            }
            prev=0;
            
        }
        cout<<"#"<<test_case<<" "<<cnt<<'\n';

	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}