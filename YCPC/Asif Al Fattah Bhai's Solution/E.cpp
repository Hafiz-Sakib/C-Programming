#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while(cin>>s){
        int len = s.size();
        int cnt=0;
        if(len%2!=0){
            for(int i=0,j=len-1;i!=j;i++,j--){
                if(s[i]!=s[j]) cnt++;
            }
        }
        else{
            for(int i=0,j=len-1;i<j;i++,j--){
                if(s[i]!=s[j]) cnt++;
            }
        }

        cout<<cnt<<endl;
    }
    return 0;
}
