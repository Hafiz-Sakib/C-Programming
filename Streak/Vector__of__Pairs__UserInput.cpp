// In the name of ALLAH

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<pair<int, string>> v(2);
    for (int i = 0; i < 2; i++)
    {
        cin >> v[i].first >> v[i].second;
        int a;
        string b;
        cin >> a >> b;
        v[i] = make_pair(a, b);
        v[i] = {a, b};
    }
    for (int i = 0; i < 2; i++)
    {
        cout << v[i].first << " " << v[i].second << endl;
    }

    return 0;
}
