#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    string answer = "";
    for(int i=0;i<s.size();i++){
        if(s[i]==' '){
            answer+=s[i];
        }
        else{
            bool upc = false;
            if(s[i]<=90){
                upc=true;
            }
            char tmp = s[i]+n-26;
            if((upc&&tmp<65)||(!upc&&tmp<97)){
                tmp+=26;
            }
            answer+=tmp;
        }
    }
    return answer;
}