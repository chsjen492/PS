#include<iostream>
#include <queue>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T=10;
	queue <int> q;
	int n;
    int tn;
    int tmp;
    int k=1;


	for(test_case = 1; test_case <= T; ++test_case)
	{	
        cin>>tn;
		for(int i=0;i<8;i++){
            cin>>n;
            q.push(n);
        }
        while(1){
            if(k>5)
                k=1;
            tmp=q.front();
            if(tmp-k<=0){
                q.pop();
                q.push(0);
                break;
            }
            q.pop();
            q.push(tmp-k);
            k++;
            }
        cout<<"#"<<test_case<<" ";
        while(!q.empty()){
            cout<<q.front()<<" ";
            q.pop();
        }
        cout<<"\n";
        k=1;


	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}