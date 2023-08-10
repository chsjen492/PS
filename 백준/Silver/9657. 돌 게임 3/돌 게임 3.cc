#include <iostream>
#include <vector>

using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int N;

	bool game[1001];
	game[1] = 1;
	game[2] = 0;
	game[3] = 1;
	game[4] = 1;

	cin >> N;
	for (int i = 5; i <= N; i++) {
		if (game[i - 1] == 0 || game[i - 3] == 0 || game[i - 4] == 0)
			game[i] = 1;
		else
			game[i] = 0;
	}
	if (game[N] == 1)
		cout << "SK";
	else
		cout << "CY";


}