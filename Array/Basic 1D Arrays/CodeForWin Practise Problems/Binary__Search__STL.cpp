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

    int desiredNumber;
    cin >> desiredNumber;

    if (binary_search(a, a + size, desiredNumber))
    {
        cout << "found";
    }
    else
    {
        cout << "not found";
    }

    return 0;
}