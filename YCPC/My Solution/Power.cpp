/*

author = Hafiz_Sakib;

*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        int first_digit = 0;
        while (n)
        {
            int r = n % 10;
            first_digit = r;
            n /= 10;
        }
        cout << first_digit;
        /*         long long int r = pow(2, n);
                cout << r; */
    }
    return 0;
}