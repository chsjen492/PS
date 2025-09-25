#include <string>
#include <vector>
#include <algorithm>
#include <cstring>

using namespace std;

int solution(int alp, int cop, vector<vector<int>> problems) {
    const int MX = 1e9;
    int max_alp = 0, max_cop = 0;
    for (auto &a : problems) {
        max_alp = max(max_alp, a[0]);
        max_cop = max(max_cop, a[1]);
    }

    if (alp > max_alp) alp = max_alp;
    if (cop > max_cop) cop = max_cop;

    static int d[151][151];
    for (int i = 0; i <= max_alp; i++)
        fill(d[i], d[i] + max_cop + 1, MX);

    d[alp][cop] = 0;

    for (int i = alp; i <= max_alp; i++) {
        for (int j = cop; j <= max_cop; j++) {
            if (i + 1 <= max_alp)
                d[i + 1][j] = min(d[i + 1][j], d[i][j] + 1);
            if (j + 1 <= max_cop)
                d[i][j + 1] = min(d[i][j + 1], d[i][j] + 1);
            for (auto &problem : problems) {
                int alp_req = problem[0];
                int cop_req = problem[1];
                int alp_rwd = problem[2];
                int cop_rwd = problem[3];
                int cost    = problem[4];
                if (i < alp_req || j < cop_req) continue;
                int alp_nxt = min(max_alp, i + alp_rwd);
                int cop_nxt = min(max_cop, j + cop_rwd);
                d[alp_nxt][cop_nxt] = min(d[alp_nxt][cop_nxt], d[i][j] + cost);
            }
        }
    }

    return d[max_alp][max_cop];
}
