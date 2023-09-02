#include<iostream>
#include<string>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	string f;
    string s;
    int n;
	int size;
    int cnt=0;
    int i=0;

	for(test_case = 1; test_case <= 10; ++test_case)
	{
		cin>>n;
        cin>>f;
        cin>>s;
        i=0;
        cnt=0;
       	size=f.length();

       while(i<s.size()){
           if(f==s.substr(i, size))
           { cnt++;
          		 i+=size;}
           else
               i++;
       }
        cout<<"#"<<test_case<<" "<<cnt<<"\n";
		


	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}