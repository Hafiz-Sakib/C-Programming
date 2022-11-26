#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    if(n==1)
        cout<<"1";
    else if(n==2)
        cout<<"12"<<endl<<"21";
    else if(n==3)
        cout<<"123"<<endl<<"2 2"<<endl<<"321";
    else if(n==4)
        cout<<"1234"<<endl<<"2  3"<<endl<<"3  2"<<endl<<"4321";
    else if(n==5)
        cout<<"12345"<<endl<<"2   4"<<endl<<"3   3"<<endl<<"4   2"<<endl<<"54321";
    else if(n==6)
        cout<<"123456"<<endl<<"2    5"<<endl<<"3    4"<<endl<<"4    3"<<endl<<"5    2"<<endl<<"654321";
    else if(n==7)
        cout<<"1234567"<<endl<<"2     6"<<endl<<"3     5"<<endl<<"4     4"<<endl<<"5     3"<<endl<<"6     2"<<endl<<"7654321";
    else if(n==8)
        cout<<"12345678"<<endl<<"2      7"<<endl<<"3      6"<<endl<<"4      5"<<endl<<"5      4"<<endl<<"6      3"<<endl<<"7      2"<<endl<<"87654321";
    else if(n==9)
        cout<<"123456789"<<endl<<"2       8"<<endl<<"3       7"<<endl<<"4       6"<<endl<<"5       5"<<endl<<"6       4"<<endl<<"7       3"<<endl<<"8       2"<<endl<<"987654321";
    return 0;
}
