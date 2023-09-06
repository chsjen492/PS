#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin>>T;
    int n;
    int cnt=0;

	for(test_case = 1; test_case <= T; ++test_case)
	{
		cin>>n;
        for(int i=-n;i<=n;i++){
            for(int j=-n;j<=n;j++){
                if(i*i+j*j<=n*n)
                    cnt++;
            }
        }
		cout<<"#"<<test_case<<" "<<cnt<<"\n";
        cnt=0;


	}
	return 0;
}