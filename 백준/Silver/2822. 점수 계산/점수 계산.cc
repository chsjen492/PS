#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<pair<int, int>> scores;
    for (int i = 0; i < 8; i++) {
        int score;
        cin >> score;
        scores.push_back({score, i + 1}); 
    }


    sort(scores.begin(), scores.end(), greater<pair<int, int>>());

    int sum = 0;
    vector<int> selected;


    for (int i = 0; i < 5; i++) {
        sum += scores[i].first;
        selected.push_back(scores[i].second);
    }


    sort(selected.begin(), selected.end());

    cout << sum << '\n';
    for (int i = 0; i < selected.size(); i++) {
        cout << selected[i] << ' ';
    }
    cout << '\n';

    return 0;
}
