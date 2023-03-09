#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
    int N, K;
    int n;
	int board[15][15]={0,};
	cin>>T;
	int blank=0;
    int cnt=0;
	for(test_case = 1; test_case <= T; ++test_case)
	{
		cin>>N>>K;
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                cin>>n;
             	board[i][j]=n;
            }
        }
        for(int i=0;i<N;i++){ //가로
            for(int j=0;j<N;j++){
                if(board[i][j]==1){
                    if(j!=N-1)
                    	blank++;
                    else{
                        if(++blank==K){
                            cnt++;
                            blank=0;
                        }
                    }
                }
                else{
                    if(blank==K)
                    {cnt++;
                     blank=0;
                    }
                    else
                        blank=0;
                }
            }
            blank=0;
        }
        for(int i=0;i<N;i++){
            for(int j=0;j<N+1;j++){
                if(board[j][i]==1){
                     if(j!=N-1)
                    	blank++;
                    else{
                        if(++blank==K){
                            cnt++;
                            blank=0;
                        }
                    }
                }
                else{
                    if(blank==K)
                    {	cnt++;
                  		blank=0;
                    }
                    else
                        blank=0;
                }
            }
            blank=0;
        }
         
        cout<<"#"<<test_case<<" "<<cnt<<"\n";
        cnt=0;     
		


	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}