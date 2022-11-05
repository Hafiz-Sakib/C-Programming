#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define space ' '
#define newline "\n"

int main()
{
    Boost;

    int size;
    cin >> size;
    int a[size];
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }

    sort(a, a + size);

    int start = 0, end = size - 1, middle, desiredNumber;
    cin >> desiredNumber;

    while (start <= end)
    {
        middle = (start + end) / 2;

        if (a[middle] == desiredNumber)
        {
            cout << "found";
            break;
        }
        else if (desiredNumber > a[middle])
        {
            start = middle + 1;
        }
        else
        {
            start = middle - 1;
        }
    }
    if (start > middle)
    {
        cout << "not found";
    }

    return 0;
}