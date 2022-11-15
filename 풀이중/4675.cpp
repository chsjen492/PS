#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	vector <vector<string>> dictionary;
	vector <vector<string>> scramble;
	vector <string> v1;
	vector <string> v2;
	vector <string> ret;
	int count = 0;
	string tmp;

	while (1) {                       //입력부분, XXXXXX가 나올때까지 계속 입력받으니 while문 사용
		if (count != 1) {                   //dictionary부분 입력받기, XXXXXX가 나오면 count++로 if문 빠져나감
			cin >> tmp;
			if (tmp == "XXXXXX")
				count++;
			v1.push_back(tmp);
			dictionary.push_back(v1);
			v1.clear();
		}
		else {                                     //scramble부분 입력받기
			cin >> tmp;
			if (tmp == "XXXXXX")
				break;
			v2.push_back(tmp);
			scramble.push_back(v2);
			v2.clear();
		}
	}

	int size1 = dictionary.size();
	int size2 = scramble.size();


	for (int i = 0; i < size2; i++) {
		vector <string> temp2 = scramble[i];
		vector <char> tmp2(temp2.begin(), temp2.end());

		for (int j = 0; j < size1; j++) {

			vector <string> temp1 = dictionary[j][0];
			vector <char> tmp1(temp1.begin(), temp1.end());

			sort(tmp1.begin(), tmp1.end());
			sort(tmp2.begin(), tmp2.end());

			if (tmp1 == tmp2) {
				ret.push_back(dictionary[j][0]);
				count++;
			}
		}
		if (count == 0)
			cout << "NOT A VALID WORD" << endl;
		sort(ret.begin(), ret.end());

		for (int k = 0; k < ret.size(); k++) {
			cout << ret[k] << endl;
		}
		count = 0;
		cout << "******" << endl;
	}
}