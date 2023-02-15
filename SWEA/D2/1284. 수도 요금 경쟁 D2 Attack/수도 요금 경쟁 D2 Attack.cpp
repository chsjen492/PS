#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
    int P,Q,R,S,W;
    int A=0;
    int B=0;

	cin>>T;
	
	for(test_case = 1; test_case <= T; ++test_case)
	{

		cin>>P>>Q>>R>>S>>W;
        A=W*P;
        if(W>R)
            B=Q+(W-R)*S;
        else
            B=Q;
        
        if(A>B)
            cout<<"#"<<test_case<<" "<<B<<"\n";
        else
            cout<<"#"<<test_case<<" "<<A<<"\n";


	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}