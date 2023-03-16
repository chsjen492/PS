
#include<iostream>

using namespace std;

int day[12]={31,28,31,30,31,30,31,31,30,31,30,31};
int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin>>T;
    int first_month;
    int first_day;
    int second_month;
    int second_day;
    int f=0;
    int s=0;

	for(test_case = 1; test_case <= T; ++test_case)
	{
		cin>>first_month>>first_day>>second_month>>second_day;
        for(int i=0;i<first_month-1;i++){
            f+=day[i];
        }
        f+=first_day;
        for(int i=0;i<second_month-1;i++){
            s+=day[i];
        }
        s+=second_day;
        cout<<"#"<<test_case<<" "<<s-f+1<<"\n";
        f=0;
        s=0;
        



	}
	return 0;
}