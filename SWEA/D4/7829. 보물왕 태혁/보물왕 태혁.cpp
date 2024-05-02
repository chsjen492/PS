#include<bits/stdc++.h>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	
	cin>>T;

	for(test_case = 1; test_case <= T; ++test_case)
	{

		int p;
        int arr[100] = {0,};
        cin>>p;
        for(int i=0;i<p;i++){
            cin>>arr[i];
        }
        if(p==1){
            cout<<"#"<<test_case<<" "<<arr[0]*arr[0]<<"\n";
        }
        else{
            int max = *max_element(arr, arr+p);
            int min = *min_element(arr, arr+p);
            cout<<"#"<<test_case<<" "<<min*max<<"\n";
        }
        


	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}