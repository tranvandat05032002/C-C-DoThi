#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ll;
const ll N = 2e5+5;
ll n, k, a[N];

bool P(ll x) {
    ll sum = 0, need = 1;
    for (ll i=0; i<n; i++) {
        sum += a[i];
        if (sum > x) {
            sum = a[i];
            need++;
        }
    }
    return (need <= k);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> k;
    ll lo = 1, hi = 0;
    for (int i=0; i<n; i++) {
        cin >> a[i];
        lo = max(lo, a[i]);
        hi += a[i];
    }
    while (lo < hi) {
        ll mid = lo + (hi-lo)/2;
        if (P(mid)) hi = mid;
        else lo = mid+1;
    }
    cout << lo;
}
