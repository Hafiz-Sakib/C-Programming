#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int a, b;

    cin >> a >> b;

    if (a == b)
    {
        cout << "Draw\n";
    }
    else if (a > b)
    {
        cout << "Argentina\n";
    }
    else
    {
        cout << "Brazil\n";
    }
    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}