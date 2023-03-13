#include "bits/stdc++.h"
using namespace std;
#define fi first
#define se second

const int N = 1e5 + 5;
const int INF = 1e9;

// khai b�o d? th?. g[u] ch?a c�c c?nh n?i v?i d?nh u. C�c c?nh s? du?c luu du?i d?ng pair<v,c>
int n, m;
vector <pair<int, int>> g[N];

int dis[N]; // m?ng d luu kho?ng c�ch c?a to�n b? d?nh

int prim(int s) { // thu?t to�n Prim b?t d?u ch?y t? d?nh ngu?n s
    int ret = 0;
    // S? d?ng priority_queue luu kho?ng c�ch c?a c�c d?nh tang d?n d?i v?i c�y khung
    // V� priority_queue.top lu�n l� ph?n t? l?n nh?t, ta s? ph?i s? d?ng greater<pair<int,int>>
    // d? priority_queue.top l� ph?n t? nh? nh?t
    // c�c ph?n t? luu trong priority queue s? c� d?ng pair<dis[u],u>
    priority_queue<pair<int, int>, vector<pair<int,int>>, greater<pair<int,int>>> q;

    // kh?i t?o kho?ng c�ch c?a c�c d?nh l� v� c�ng l?n
    for (int i = 1; i <= n; i++) dis[i] = INF;

    // kh?i t?o d?nh ngu?n c� kho?ng c�ch l� 0 v� push d?nh n�y v�o
    dis[s] = 0;
    q.push({0, s});

    while (!q.empty()) {
        // l?y d?nh c� kho?ng c�ch nh? nh?t chua du?c k?t n?p
        auto top = q.top(); q.pop();
        int curDis = top.fi; int u = top.se;

        if (curDis != dis[u]) continue;

        // k?t n?p d?nh u v�o c�y khung
        ret += dis[u]; dis[u] = -INF;

        // c?p nh?t kho?ng c�ch cho c�c d?nh k? u
        for (auto &e : g[u]) {
            int v = e.fi; int c = e.se;
            if (dis[v] > c) {
                dis[v] = c;
                q.push({ dis[v], v});
            }
        }
    }
    return ret;
}
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    cin >> n >> m;

    for (int i = 1; i <= m; i++) {
        int u, v, c;
        cin >> u >> v >> c;
        g[u].push_back({v, c});
        g[v].push_back({u, c});
    }

    cout << prim(1) << '\n';
}
