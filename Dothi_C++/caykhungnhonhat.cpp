#include "bits/stdc++.h"
using namespace std;
#define fi first
#define se second

const int N = 1e5 + 5;
const int INF = 1e9;

// khai báo d? th?. g[u] ch?a các c?nh n?i v?i d?nh u. Các c?nh s? du?c luu du?i d?ng pair<v,c>
int n, m;
vector <pair<int, int>> g[N];

int dis[N]; // m?ng d luu kho?ng cách c?a toàn b? d?nh

int prim(int s) { // thu?t toán Prim b?t d?u ch?y t? d?nh ngu?n s
    int ret = 0;
    // S? d?ng priority_queue luu kho?ng cách c?a các d?nh tang d?n d?i v?i cây khung
    // Vì priority_queue.top luôn là ph?n t? l?n nh?t, ta s? ph?i s? d?ng greater<pair<int,int>>
    // d? priority_queue.top là ph?n t? nh? nh?t
    // các ph?n t? luu trong priority queue s? có d?ng pair<dis[u],u>
    priority_queue<pair<int, int>, vector<pair<int,int>>, greater<pair<int,int>>> q;

    // kh?i t?o kho?ng cách c?a các d?nh là vô cùng l?n
    for (int i = 1; i <= n; i++) dis[i] = INF;

    // kh?i t?o d?nh ngu?n có kho?ng cách là 0 và push d?nh này vào
    dis[s] = 0;
    q.push({0, s});

    while (!q.empty()) {
        // l?y d?nh có kho?ng cách nh? nh?t chua du?c k?t n?p
        auto top = q.top(); q.pop();
        int curDis = top.fi; int u = top.se;

        if (curDis != dis[u]) continue;

        // k?t n?p d?nh u vào cây khung
        ret += dis[u]; dis[u] = -INF;

        // c?p nh?t kho?ng cách cho các d?nh k? u
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
