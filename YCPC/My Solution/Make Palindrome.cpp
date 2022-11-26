/*

author = Hafiz_Sakib;

*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;

    while (cin >> s)
    {
        int n = s.length();

        int cc = 0;

        for (int i = 0; i < n / 2; i++)
        {
            if (s[i] == s[n - i - 1])
            {
                continue;
            }

            cc += 1;

            if (s[i] < s[n - i - 1])
            {
                s[n - i - 1] = s[i];
            }
            else
            {
                s[i] = s[n - i - 1];
            }
        }
        cout << cc << endl;
    }

    return 0;
}