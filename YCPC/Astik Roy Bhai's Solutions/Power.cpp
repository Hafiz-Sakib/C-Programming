#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, p = 1;

    cin >> n;

    while (p < n)
    {
        p *= 2;
    }

    cout << p << '\n';

    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int TC;
    cin >> TC;

    while (TC--)
    {
        solve();
    }

    return 0;
}
