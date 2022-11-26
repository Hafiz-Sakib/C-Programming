#include <bits/stdc++.h>
using namespace std;

int solve(string str)
{
    int len = str.length(), halfLen = (len - 1) / 2, i, j, cnt = 0;

    for (i = 0, j = len - 1; i <= halfLen; ++i, --j)
    {
        if (str[i] != str[j])
        {
            ++cnt;
        }
    }

    return cnt;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string str;
    while (cin >> str)
    {
        solve(str);
    }

    return 0;
}