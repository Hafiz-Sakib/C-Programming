/*

string author;
author = Hafiz_Sakib;

*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ignore cin.ignore(numeric_limits<streamsize>::max(), '\n')
#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
int main()
{
    Boost;
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
        cout << "Draw" << endl;
    }
    return 0;
}