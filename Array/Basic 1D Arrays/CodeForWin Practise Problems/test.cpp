#include<bits/stdc++.h>
using namespace std;


int main(){
    int s,p,e;
    cout<<"Array size : ";
    cin>>s;
    cout<<endl;
    long long int arr[s];
    for(int i=0;i<s;i++){
        cout<<"Array element : ";
        cin>>e;
        cout<<endl;
        cout<<"Element position : ";
        cin>>p;
        cout<<endl;
        arr[p]=e;
    }
    for(int i=0;i<s;i++){
        cout<<arr[i]<<endl;;
    }
    return 0;
}