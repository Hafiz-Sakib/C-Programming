/*

author = Hafiz_Sakib;

*/

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, i, j;

    cin >> n;

    if (n == 1)
    {
        cout << "1\n";
        return;
    }

    for (i = 1; i <= n; ++i)
    {
        cout << i;
    }
    cout << '\n';

    for (i = 2; i < n; ++i)
    {
        {
            cout << i;
        }

        for (j = 0; j < n - 2; ++j)
        {
            cout << ' ';
        }

        cout << (n - i + 1) << '\n';
    }

    for (i = n; i >= 1; --i)
    {
        cout << i;
    }

    cout << '\n';

    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}