/*

author = Hafiz_Sakib;

*/

#include <bits/stdc++.h>
using namespace std;

int sum(string s)
{
    int sum = 0;
    for (auto u : s)
    {
        int a;
        a = u - '0';
        sum = sum + a;
    }

    return sum;
}
void result(string s, string p)
{
    int sum1 = 0, sum2 = 0;
    sum1 = sum(s);
    sum2 = sum(p);
    if (sum1 != sum2)
    {
        if (sum1 > sum2)
        {
            cout << "Argentina" << endl;
            return;
        }
        else if (sum1 < sum2)
        {
            cout << "Brazil" << endl;
            return;
        }
    }
    else
    {
        string s, p;
        cin >> s >> p;
        result(s, p);
    }
}

int main()
{
    int a, b;
    cin >> a >> b;

    if (a != b)
    {
        if (a > b)
        {
            cout << "Argentina" << endl;
        }
        else if (b > a)
        {
            cout << "Brazil" << endl;
        }
    }
    else
    {
        int sum1 = 0, sum2 = 0;
        string s, p;
        cin >> s >> p;
        sum1 = sum(s);
        sum2 = sum(p);
        if (sum1 != sum2)
        {
            if (sum1 > sum2)
            {
                cout << "Argentina" << endl;
            }
            else if (sum1 < sum2)
            {
                cout << "Brazil" << endl;
            }
        }
        else
        {
            string s, p;
            cin >> s >> p;
            result(s, p);
        }
    }
    return 0;
}