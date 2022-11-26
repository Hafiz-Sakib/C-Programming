/*

author = Hafiz_Sakib;

*/

#include <bits/stdc++.h>
using namespace std;
int main()
{

    int a, b;
    string c, d;
    // int ar, br;

    cin >> a >> b;

    while (1)
    {
        if (a == b)
        {
            int ar = 0, br = 0;
            cin >> c >> d;
            for (int i = 0; i < 5; i++)
            {
                if (c[i] == '1')
                {
                    ar += 1;
                }
            }
            for (int j = 0; j < 5; j++)
            {
                if (d[j] == '1')
                {
                    br += 1;
                }
            }

            if (ar > br)
            {
                cout << "Argentina" << endl;
                break;
            }
            else if (ar < br)
            {
                cout << "Brazil" << endl;
                break;
            }
            else
            {
                continue;
            }
        }
        else if (a > b)
        {
            cout << "Argentina" << endl;
            break;
        }
        else if (a < b)
        {
            cout << "Brazil" << endl;
            break;
        }
    }

    return 0;
}