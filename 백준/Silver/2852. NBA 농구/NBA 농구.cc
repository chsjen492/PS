#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int team;
    int max_time = 48 * 60;
    string time;
    int ret[3][2] = { {0, 0}, {0, 0}, {0, 0} };
    int score[3] = { 0, 0, 0 };
    int one_time = 0, two_time = 0;
    int last_time = 0;

    for (int i = 0; i < n; i++) {
        cin >> team >> time;
        int tmp = ((time[0] - '0') * 10 + (time[1] - '0')) * 60 + (time[3] - '0') * 10 + (time[4] - '0');

        if (score[1] > score[2]) {
            one_time += tmp - last_time;
        }
        else if (score[1] < score[2]) {
            two_time += tmp - last_time;
        }

        score[team]++;

        last_time = tmp;
    }

    if (score[1] > score[2]) {
        one_time += max_time - last_time;
    }
    else if (score[1] < score[2]) {
        two_time += max_time - last_time;
    }

    ret[1][0] = one_time / 60;
    ret[1][1] = one_time % 60;
    ret[2][0] = two_time / 60;
    ret[2][1] = two_time % 60;

    printf("%02d:%02d\n", ret[1][0], ret[1][1]);
    printf("%02d:%02d\n", ret[2][0], ret[2][1]);

    return 0;
}
