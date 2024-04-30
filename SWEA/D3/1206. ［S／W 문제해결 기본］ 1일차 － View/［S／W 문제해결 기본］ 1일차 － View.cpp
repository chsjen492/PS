#include<bits/stdc++.h>

using namespace std;

int main(int argc, char** argv)
{
    ios::sync_with_stdio(0);
	cin.tie(0);
	int test_case;
	int T=10;
	
	for(test_case = 1; test_case <= T; ++test_case)
	{
		int n, left, right;
        int ret=0;
     	cin>>n;
        int height[1001]={0,};
        for(int i=0;i<n;i++){
            cin>>height[i];
        }
        for(int i=2;i<n-2;i++){
            left = max(height[i-2], height[i-1]);
            right = max(height[i+2], height[i+1]);
            if(height[i]>left&&height[i]>right){
                ret+=height[i]-max(left, right);
            }
            else
                ret+=0;
        }
        cout<<"#"<<test_case<<" "<<ret<<'\n';
        ret=0;
            
        
		


	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}