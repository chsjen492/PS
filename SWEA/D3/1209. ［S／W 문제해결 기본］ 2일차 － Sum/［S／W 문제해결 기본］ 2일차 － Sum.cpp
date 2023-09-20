#include<iostream>
#include<algorithm>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T=10;
    int n,t;
    int idx=99;
    int m=0;

	for(test_case = 1; test_case <= T; ++test_case)
	{
        cin>>t;
		int arr[100][100]={0,};
        int c_sum[100]={0,};
        int r_sum[100]={0,};
        int cross1=0;
        int cross2=0;
        for(int i=0;i<100;i++){
            for(int j=0;j<100;j++){
                cin>>n;
                arr[i][j]=n;
                if(i==j)
                    cross1+=n;
                r_sum[i]+=n;
                c_sum[j]+=n;
            }
            cross2+=arr[i][idx];
            idx--;
        }
           sort(r_sum, r_sum+100);
        	sort(c_sum, c_sum+100);
        m=max(m,r_sum[99]);
        m=max(m,c_sum[99]);
        m=max(m,cross1);
        m=max(m,cross2);
     
        cout<<"#"<<test_case<<" "<<m<<"\n";
            
        m=0;
        idx=99;
				



	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}