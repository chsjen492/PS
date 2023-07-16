#include<iostream>

using namespace std;

int power(int a, int b, int n){
    if(b==1)
        return a;
    return power(a*n, b-1, n);
}
int main(int argc, char** argv)
{
	int test_case;
	int T=10;
	int N, M;
	int tc;
	for(test_case = 1; test_case <= T; ++test_case)
	{
        cin>>tc;
		cin>>N>>M;
        cout<<"#"<<tc<<" "<<power(N,M, N)<<"\n";

	}
	return 0;
}