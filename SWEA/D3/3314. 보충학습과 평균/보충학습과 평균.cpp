#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin>>T;
	
    int arr[5]={0,};
    int n;
    int sum=0;
    
	for(test_case = 1; test_case <= T; ++test_case)
	{

		for(int i=0;i<5;i++){
            cin>>n;
            if(n<40)
               n=40;
            arr[i]=n;
            sum+=n;
            
        }
        cout<<"#"<<test_case<<" "<<sum/5<<"\n";
        sum=0;
        


	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}