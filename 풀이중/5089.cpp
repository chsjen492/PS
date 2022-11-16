#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	vector <vector<string>> v; //마을 이름 담을 2차원 배열
	vector <string> v1; //2차원 배열에 값을 넣기 위한 string 벡터
	int n;
	int count = 0; //week의 수 count
	string s;

	while (1) {
		cin>> n;
		if (n > 1 && n <= 100) {
			for (int i = 0; i < n; i++) { //입력된 n의 값 만큼 마을 이름 벡터에 입력
				cin >> s;
				v1.push_back(s);
			}
			v.push_back(v1);
			v1.clear();
			count++;
			continue; //0이 아니니 처음으로 돌아가 다시 입력을 받음
		}
		else if (n == 0)
			break; //0 입력시 입력 종료
	}


	for (int j = 0; j < count; j++) { //출력 구현
		sort(v[j].begin(), v[j].end()); //마을 이름 값 정렬
		v[j].erase(unique(v[j].begin(), v[j].end()), v[j].end()); //중복된 값 제거
		cout << "Week " << j + 1 << " " << v[j].size() << endl; //출력문
	}


}