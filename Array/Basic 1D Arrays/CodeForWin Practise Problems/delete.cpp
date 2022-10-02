#include<bits/stdc++.h>
using namespace std;


int main(){
    int n,p;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cin>>p;

    for(int i=p-1;i<n-1;i++){
        arr[i]=arr[i+1];
    }

    for(int i=0;i<n-1;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}