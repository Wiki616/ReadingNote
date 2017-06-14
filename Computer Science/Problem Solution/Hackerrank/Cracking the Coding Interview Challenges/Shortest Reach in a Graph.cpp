#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <vector>
#include <queue>

using namespace std;

const int MAXN = 1002;

int n, m;
vector<int> edge[MAXN];
int g[MAXN];

void bfs(int st) {
   queue<pair<int, int> > qu;
   qu.push(make_pair(st, 0));
   g[st] = 0;
   while (qu.size()) {
       pair<int, int> s = qu.front();
       qu.pop();
       for (int i = 0;i < edge[s.first].size();i ++) {
           int t = edge[s.first][i];
           if (g[t] == -1) {
               g[t] = s.second + 1;
               qu.push(make_pair(t, g[t]));
           }
       }
   }
   int cc = 0;
   for (int i = 1;i <= n;i ++) {
       if (st == i) continue;
       if (g[i] != -1) g[i] *= 6;
   		if (!cc) cout << g[i];
   		else {
   			cout << " " << g[i];
		}
       cc ++;
   }
   cout << endl;
}

int main () {
    int q;
    cin >> q;
    for (;q;q --) {
        cin >> n >> m;
        for (int i = 1;i <= n;i ++) edge[i].clear();
        memset(g, -1, sizeof(g));
        int s;
        for (int i = 1;i <= m;i ++) {
            int u, v;
            cin >> u >> v;
            edge[u].push_back(v);
            edge[v].push_back(u);
        }
        cin >> s;
        bfs(s);
    }
}
