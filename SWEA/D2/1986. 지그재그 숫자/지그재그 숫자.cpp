#include<iostream>

using namespace std;
int cal(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        if(i%2==0)
            sum-=i;
        else
            sum+=i;
    }
    return sum;
}
int main(int argc, char** argv)
{
	int test_case;
	int T;
    int N;

	cin>>T;
	
	for(test_case = 1; test_case <= T; ++test_case)
	{
		cin>>N;
        cout<<"#"<<test_case<<" "<<cal(N)<<"\n";
		
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}