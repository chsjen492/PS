#include<iostream>
#include<algorithm>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T=10;
    int dump=0;
    int arr[100]={0,};
    int tmp;

	for(test_case = 1; test_case <= T; ++test_case)
	{
		cin>>dump;
        for(int i=0;i<100;i++){
            cin>>tmp;
            arr[i]=tmp;
        }
        sort(arr, arr+100);
        for(int i=0;i<dump;i++){
            arr[0]++;
            arr[99]--;
            sort(arr,arr+100);
        }
        cout<<"#"<<test_case<<" "<<arr[99]-arr[0]<<"\n";
		


	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}