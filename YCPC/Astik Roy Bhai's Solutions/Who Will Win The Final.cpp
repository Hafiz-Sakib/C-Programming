#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b;

    cin >> a >> b;

    if (a > b)
    {
        cout << "Argentina\n";
    }
    else if (a < b)
    {
        cout << "Brazil\n";
    }
    else
    {
        bool draw = true;
        int i;
        string s1, s2;

        while (draw)
        {
            cin >> s1 >> s2;

            for (i = 0; s1[i] != '\0'; ++i)
            {
                if (s1[i] == '1')
                {
                    ++a;
                }
            }

            for (i = 0; s2[i] != '\0'; ++i)
            {
                if (s2[i] == '1')
                {
                    ++b;
                }
            }

            if (a > b)
            {
                cout << "Argentina\n";
                draw = false;
            }
            else if (a < b)
            {
                cout << "Brazil\n";
                draw = false;
            }
        }
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