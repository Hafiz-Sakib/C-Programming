#include <iostream>
#include <cmath>
using namespace std;
unsigned int findNextPowerOf2(unsigned int n)
{
    n = n - 1;
    int lg = log2(n);
    return 1U << (lg + 1);
}
int main()
{
    int t;
    cin >> t;
    unsigned int n;
    while (t--)
    {
        cin >> n;
        if (n == 1)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << findNextPowerOf2(n) << endl;
        }
    }
    return 0;
}
