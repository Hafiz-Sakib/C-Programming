#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int a,b;
    cin>>a>>b;
    if(a>b)
        cout<<"Argentina";
    else if(b>a)
        cout<<"Brazil";
    else
        cout<<"Draw";
    return 0;
}
