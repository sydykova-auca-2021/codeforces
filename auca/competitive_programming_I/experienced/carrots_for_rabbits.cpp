#include <bits/stdc++.h>

typedef long long ll;

struct Carrot {
    ll s;
    int p;
    ll delta;

    Carrot(ll s_) : s(s_), p(1) {
        delta = compute_delta();
    }

    ll compute_cost() const {
        ll q = s / p;
        ll r = s % p;
        return (p - r) * q * q + r * (q + 1) * (q + 1);
    }

    ll compute_delta() const {
        if (p >= s) return 0;
        ll cost_p = compute_cost();
        ll new_p = p + 1;
        ll q = s / new_p;
        ll r = s % new_p;
        ll cost_p1 = (new_p - r) * q * q + r * (q + 1) * (q + 1);
        return cost_p - cost_p1;
    }

    bool operator<(const Carrot& other) const {
        return delta < other.delta;
    }
};

void solve() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n, k;
    std::cin >> n >> k;
    std::vector<ll> a(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }

    std::priority_queue<Carrot> pq;
    std::vector<Carrot> carrots;
    for (int i = 0; i < n; ++i) {
        Carrot carrot(a[i]);
        if (carrot.delta > 0) {
            pq.push(carrot);
        }
        carrots.push_back(carrot);
    }

    int total_pieces = n;
    while (total_pieces < k && !pq.empty()) {
        Carrot carrot = pq.top();
        pq.pop();

        carrot.p += 1;
        total_pieces += 1;
        carrot.delta = carrot.compute_delta();
        if (carrot.delta > 0 && carrot.p < carrot.s) {
            pq.push(carrot);
        }

        for (auto& c : carrots) {
            if (c.s == carrot.s && c.p == carrot.p - 1) {
                c.p = carrot.p;
                c.delta = carrot.delta;
                break;
            }
        }
    }

    ll total_cost = 0;
    for (const auto& carrot : carrots) {
        total_cost += carrot.compute_cost();
    }
    std::cout << total_cost << "\n";
}


int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
    return 0;
}