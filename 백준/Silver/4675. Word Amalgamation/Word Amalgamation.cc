#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    string in;
    vector<string> dictionary;
    vector<string> sorted;
    bool dic=true;
    
    while(cin){
        cin>>in;
        if(in=="XXXXXX"){
            if(dic){
                dic=false;
                continue;
            }
            else{
                return 0;
            }
        }
        if(dic){
            dictionary.push_back(in);
            sort(in.begin(), in.end());
            sorted.push_back(in);
        }
        else{
            sort(in.begin(), in.end());
            vector<string> ans;
            for(int i=0;i<sorted.size();i++){
                if(in==sorted[i]){
                    ans.push_back(dictionary[i]);
                }
            }
            if(ans.empty()){
                cout<<"NOT A VALID WORD\n";
            }
            else {
                sort(ans.begin(), ans.end());
                for(int i=0;i<ans.size();i++){
                    cout<<ans[i]<<'\n';
                }
            }
            cout<<"******\n";
        }
    }
}