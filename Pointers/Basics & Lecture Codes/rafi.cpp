#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int passByValue(int b)
{
    b += 100;
    return b;
}

int ref(int &a)
{
    a += 100;
    return a;
}

int main()
{
    int x = 30;
    cout << passByValue(x) << endl;
    cout << x << endl;
    cout << ref(x) << endl;
    cout << x << endl;

    return 0;
}