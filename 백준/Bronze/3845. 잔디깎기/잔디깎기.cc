#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int nx, ny;
	double w;
	double n;
	bool ret = true;
	vector<double> xi;
	vector<double> yi;

	while (1) {
		cin >> nx >> ny >> w;
		if (nx == 0 && ny == 0 && w == 0.0)
			break;
		ret = true;
		xi.clear();
		yi.clear();
		for (int i = 0; i < nx; i++) {
			cin >> n;
			xi.push_back(n);
		}
		for (int i = 0; i < ny; i++) {
			cin >> n;
			yi.push_back(n);
		}
		sort(xi.begin(), xi.end());
		sort(yi.begin(), yi.end());

		for (int i = 0; i < nx - 1; i++) {
			if (i == nx - 2) {
				if (xi[i] + w/2 < xi[i + 1]-w/2 || xi[i + 1] + w/2 < 75) {
					cout << "NO" << endl;
					ret = false;
					break;
				}
			}
			else {
				if (i == 0) {
					if (xi[i] - w / 2 > 0 || xi[i] + w / 2 < xi[i + 1] - w / 2) {
						cout << "NO" << endl;
						ret = false;
						break;
					}
				}
				if (xi[i] + w/2 < xi[i + 1]-w/2) {
					cout << "NO" << endl;
					ret = false;
					break;
				}
			}
		}
		if (ret == false) {
			ret = true;
			continue;
		}
		for (int i = 0; i < ny - 1; i++) {
			if (i == ny - 2) {
				if (yi[i] + w/2 < yi[i + 1]-w/2 || yi[i + 1] + w/2 < 100) {
					cout << "NO" << endl;
					ret = false;
					break;
				}
			}
			else {
				if (i == 0) {
					if (yi[i] - w / 2 > 0 || yi[i] + w / 2 < yi[i + 1] - w / 2) {
						cout << "NO" << endl;
						ret = false;
						break;
					}
				}
				if (yi[i] + w/2 < yi[i + 1]-w/2) {
					cout << "NO" << endl;
					ret = false;
					break;
				}
			}
		}
		if (ret == true)
			cout << "YES" << endl;

	}
	return 0;

}