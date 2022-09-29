#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    int max = ar[0], second_Large;
    for (int i = 0; i < n; i++)
    {
        if (max < ar[i])
        {
            max = ar[i];
        }
    }
    int x;
    for (i = 0; i < n; i++)
    {
        if (max <= ar[i])
        {
            max = ar[i];
            x = i;
        }
        else
        {
            second_Large = ar[i];
        }
    }

    for (int j = 0; j < n; j++)
    {
        if (j != x)
        {
            if (second_Large < ar[j])
            {
                second_Large = ar[j];
            }
        }
    }

    cout << second_Large << endl;
    return 0;
}