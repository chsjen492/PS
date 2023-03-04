#include<iostream>
#include <vector>
using namespace std;

int main(int argc, char** argv)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
	int test_case;
	int T;
    int N, M;
    int n;
    int max=0;
    int sum=0;
	vector<int> a;
    vector<int> b;
	cin>>T;
	
	for(test_case = 1; test_case <= T; ++test_case)
	{

		cin>>N>>M;
		for(int i=0;i<N;i++){
            cin>>n;
            a.push_back(n);
        }
        for(int i=0;i<M;i++){
            cin>>n;
            b.push_back(n);
        }
        if(M>N){
        for(int i=0;i<=M-N;i++){
            for(int j=0;j<N;j++){
                sum+=a[j]*b[i+j];
            }
            if(sum>max)
                max=sum;
            sum=0;
        }}
        if(M<N){
        for(int i=0;i<N-M;i++){
            for(int j=0;j<M;j++){
                sum+=a[i+j]*b[j];
            }
            if(sum>max)
                max=sum;
            sum=0;
        }}
        if(M==N){
            for(int i=0;i<M;i++){
                sum+=a[i]*b[i];
            }
            max=sum;
        }
        
        cout<<"#"<<test_case<<" "<<max<<"\n";
        
        max=0;
        sum=0;
        a.clear();
        b.clear();

	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}