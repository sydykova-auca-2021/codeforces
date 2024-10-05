#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;
#define fast_io                \
    ios_base::sync_with_stdio; \
    cin.tie(0);                \
    cout.tie(0);

int check_prime(ll a)
{
    for (ll i = 2; i <= sqrt(a); i++)
        if (a % i == 0)
            return 1;
    return 0;
}

bool sorting(pair<ll, ll> a, pair<ll, ll> b)
{
    if (a.first == b.first)
        return a.second < b.second;
    return a.first > b.first;
}

int total_bits(int n)
{
    int p = (int)log2(n) + 1;
    return p;
}

int countSetBits(int n)
{
    int count = 0;
    while (n != 0)
    {
        count += n & 1;
        n >>= 1;
    }
    return count;
}

int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    // cout.tie(NULL);
    fast_io;
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    ll t;
    cin >> t;
    for (ll i = 1; i <= t; i++)
    {
        ll n, k, x;
        cin >> n >> k >> x;
        if (k == 1)
            cout << "NO" << endl;
        else
        {
            if (x != 1)
            {
                cout << "YES" << endl;
                cout << n << endl;
                for (ll j = 1; j <= n; j++)
                {
                    cout << "1";
                    if (j != n)
                        cout << " ";
                    else
                        cout << endl;
                }
            }
            else
            {
                if (n % 2 == 0)
                {
                    cout << "YES" << endl;
                    cout << n / 2 << endl;
                    for (ll j = 1; j <= n / 2; j++)
                    {
                        cout << "2";
                        if (j != n / 2)
                            cout << " ";
                        else
                            cout << endl;
                    }
                }
                else
                {
                    if (k == 2)
                        cout << "NO" << endl;
                    else
                    {
                        cout << "YES" << endl;
                        cout << ((n - 3) / 2) + 1 << endl;
                        cout << "3";
                        for (ll j = 1; j <= (n - 3) / 2; j++)
                            cout << " 2";
                        cout << endl;
                    }
                }
            }
        }
    }
    // cerr << "Time:" << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms" << endl;
    return 0;
}