/*

author = Hafiz_Sakib;

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int maxi = max(a, b);
    int mini = min(a, b);
    int result = maxi - mini;
    cout << result << endl;
    return 0;
}