
#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin>>T;
	string s;
	for(test_case = 1; test_case <= T; ++test_case)
	{

		cin>>s;
        cout<<"#"<<test_case<<" ";
        
        if(s=="MON")
            cout<<6<<"\n";
        else if(s=="TUE")
            cout<<5<<"\n";
        else if(s=="WED")
            cout<<4<<"\n";
        else if(s=="THU")
            cout<<3<<"\n";
        else if(s=="FRI")
            cout<<2<<"\n";
        else if(s=="SAT")
            cout<<1<<"\n";
        else if(s=="SUN")
            cout<<7<<"\n";
              
              


	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}