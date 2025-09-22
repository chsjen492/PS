#include <string>
#include <vector>
using namespace std;

vector<vector<int>> gUsers;
vector<int> gEmoticons;
vector<int> tmp;
int emoPlus = 0;
int price = 0;
int disc[4] = {40, 30, 20, 10};

void func(int l){
    if(l==gEmoticons.size()){
        int tmpEmo = 0;
        int tmpPrice = 0;
        
        for(int i=0;i<gUsers.size();i++){
            int tp = 0;
            for(int j=0;j<gEmoticons.size();j++){
                if(tmp[j]>=gUsers[i][0]){
                    tp += (100-tmp[j])*gEmoticons[j] / 100;
                }
            }
            if(gUsers[i][1]<=tp) tmpEmo++;
            else tmpPrice +=tp;
        }
        
        if(emoPlus < tmpEmo) {
            emoPlus = tmpEmo;
            price = tmpPrice;
        }
        else if(emoPlus == tmpEmo && price < tmpPrice) {
            price = tmpPrice;
        }
        return;
    }
    for(int i=0;i<4;i++){
        tmp.push_back(disc[i]);
        func(l+1);
        tmp.pop_back();
    }
}

vector<int> solution(vector<vector<int>> users, vector<int> emoticons) {
    vector<int> answer(2);
    gUsers = users;
    gEmoticons = emoticons;
    func(0);
    answer[0] = emoPlus;
    answer[1] = price;
    return answer;
}