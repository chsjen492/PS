#include <iostream>
#include <algorithm>
#include <map>
#include<unordered_map>
#include<vector>

std::map <int, int> order;
bool compare(std::pair<int, int>& a, std::pair<int, int>& b) {
	if (a.second == b.second)
		return order[a.first] < order[b.first];
	return a.second > b.second;
}

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n, c;
	int tmp;
	std::unordered_map<int, int> m;
	std::cin >> n >> c;
	for (int i = 0; i < n; i++) {
		std::cin >> tmp;
		m[tmp]++;
		if (order[tmp] == 0)
			order[tmp] = i + 1; 
	}
	std::vector<std::pair<int, int>> vm(m.begin(), m.end());
	sort(vm.begin(), vm.end(), compare);
	for (auto i:vm) {
		for (int j = 0; j < i.second; j++) {
			std::cout << i.first << " ";
		}
	}

	
}