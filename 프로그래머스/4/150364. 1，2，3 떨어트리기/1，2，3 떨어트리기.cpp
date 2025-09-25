#include <bits/stdc++.h>
using namespace std;

vector<int> solution(vector<vector<int>> edges, vector<int> target) {
    int n = edges.size() + 1;

    vector<vector<int>> children(n + 1);
    for (auto &e : edges) {
        children[e[0]].push_back(e[1]);
    }
    for (int i = 1; i <= n; ++i)
        sort(children[i].begin(), children[i].end());

    vector<int> is_leaf(n + 1, 0);
    vector<int> leaf_index(n + 1, -1);
    vector<int> leaves;
    for (int i = 1; i <= n; ++i) {
        if (children[i].empty()) {
            leaf_index[i] = leaves.size();
            leaves.push_back(i);
            is_leaf[i] = 1;
        }
    }

    int leaf_cnt = leaves.size();
    int total_sum = 0;
    for (int i = 1; i <= n; ++i)
        total_sum += target[i - 1];

    if (total_sum == 0) return {};

    int lower_bound = 0;
    for (int li = 0; li < leaf_cnt; ++li) {
        int node = leaves[li];
        int t = target[node - 1];
        lower_bound += (t + 2) / 3;
    }
    int upper_bound = total_sum;

    vector<int> ptr(n + 1, 0);
    vector<int> visit_seq;
    visit_seq.reserve(upper_bound);
    for (int step = 0; step < upper_bound; ++step) {
        int cur = 1;
        while (!children[cur].empty()) {
            int idx = ptr[cur];
            int nxt = children[cur][idx];
            ptr[cur] = (ptr[cur] + 1) % (int)children[cur].size();
            cur = nxt;
        }
        visit_seq.push_back(cur);
    }

    for (int m = max(1, lower_bound); m <= upper_bound; ++m) {
        vector<int> cnt_leaf(leaf_cnt, 0);
        bool ok = true;

        for (int i = 0; i < m; ++i) {
            int node = visit_seq[i];
            if (!is_leaf[node]) { 
                ok = false;
                break; 
            }
            cnt_leaf[leaf_index[node]]++;
        }
        if (!ok) continue;

        bool feasible = true;
        for (int li = 0; li < leaf_cnt; ++li) {
            int need = target[leaves[li] - 1];
            if (cnt_leaf[li] == 0) {
                if (need != 0) { 
                    feasible = false; 
                    break; 
                }
            } else {
                if (need < cnt_leaf[li] || need > 3 * cnt_leaf[li]) { feasible = false; break; }
            }
        }
        if (!feasible) continue;

        vector<int> rem_cnt = cnt_leaf;
        vector<int> rem_target(leaf_cnt);
        for (int li = 0; li < leaf_cnt; ++li)
            rem_target[li] = target[leaves[li] - 1];

        vector<int> ans;
        ans.reserve(m);
        bool construct_ok = true;

        for (int i = 0; i < m; ++i) {
            int node = visit_seq[i];
            int li = leaf_index[node];
            bool placed = false;

            for (int v = 1; v <= 3; ++v) {
                if (rem_target[li] - v < 0) continue;
                int after_cnt = rem_cnt[li] - 1;
                int min_possible = after_cnt * 1;
                int max_possible = after_cnt * 3;
                int remain_need = rem_target[li] - v;

                if (remain_need >= min_possible && remain_need <= max_possible) {
                    ans.push_back(v);
                    rem_target[li] -= v;
                    rem_cnt[li]--;
                    placed = true;
                    break;
                }
            }
            if (!placed) { 
                construct_ok = false; 
                break; }
        }
        if (construct_ok) return ans;
    }

    return vector<int>{-1};
}
