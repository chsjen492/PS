#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
    int t1, m1, t2, m2;
    int t=0;
    int m=0;
	
	cin>>T;

	for(test_case = 1; test_case <= T; ++test_case)
	{
		cin>>t1>>m1>>t2>>m2;
        t=t1+t2;
        m=m1+m2;
        if(m>=60){
            m-=60;
            t++;
        }
        if(t>12){
            t-=12;
        }
		cout<<"#"<<test_case<<" "<<t<<" "<<m<<"\n";


	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}