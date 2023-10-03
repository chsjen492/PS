#include<iostream>
using namespace std;

int compare(int a){
    int cnt=0;
   while(a>10){
       if(a%10==3||a%10==6||a%10==9)
           cnt++;
       a/=10;
   }
    if(a%10==3||a%10==6||a%10==9)
           cnt++;
  
    return cnt;
}
int main(int argc, char** argv)
{
	int N;

	cin>>N;

	for(int i=1;i<=N;i++)
	{
		if(compare(i)==3)
            cout<<"--- ";
        else if(compare(i)==2)
            cout<<"-- ";
        else if(compare(i)==1)
            cout<<"- ";
        else
            cout<<i<<" ";
		


	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}