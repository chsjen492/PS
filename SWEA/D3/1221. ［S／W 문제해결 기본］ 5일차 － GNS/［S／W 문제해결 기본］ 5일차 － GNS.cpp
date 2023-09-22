#include<iostream>
#include <algorithm>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
    string s;
    int n;
    string sr[10]={"ZRO", "ONE", "TWO", "THR", "FOR", "FIV", "SIX", "SVN", "EGT", "NIN"};

	cin>>T;

	for(test_case = 1; test_case <= T; ++test_case)
	{
		cin>>s>>n;
        int arr[10]={0,};
        for(int i=0;i<n;i++){
            cin>>s;
            if(s=="ZRO")
               arr[0]++;
            if(s=="ONE")
               arr[1]++;
            if(s=="TWO")
               arr[2]++;
            if(s=="THR")
               arr[3]++;
            if(s=="FOR")
               arr[4]++;
            if(s=="FIV")
               arr[5]++;
            if(s=="SIX")
               arr[6]++;
            if(s=="SVN")
               arr[7]++;
            if(s=="EGT")
               arr[8]++;
            if(s=="NIN")
               arr[9]++;
        }
        cout<<"#"<<test_case<<" ";
        for(int i=0;i<10;i++){
            for(int j=0;j<arr[i];j++){
                cout<<sr[i]<<" ";
            }
        }
        cout<<"\n";
            
		


	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}