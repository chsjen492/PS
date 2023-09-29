#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T, n;
    int arr[5]={2,3,5,7,11};
	cin>>T;

	for(test_case = 1; test_case <= T; ++test_case)
	{
		cin>>n;
        int i=0;
        int ret[5]={0,};
        while(i<5){
            if(n%arr[i]==0)
            {
                ret[i]++;
                n/=arr[i];
            }
            else
                i++;
        }
        cout<<"#"<<test_case<<" ";
        for(int i=0;i<5;i++)
            cout<<ret[i]<<" ";
        cout<<"\n";
		


	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}