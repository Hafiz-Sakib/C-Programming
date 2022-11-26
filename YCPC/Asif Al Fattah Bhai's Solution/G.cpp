#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    char ar[6],br[6];
    int ca=0,cb=0;
    cin>>a>>b;
    if(a>b)
        cout<<"Argentina";
    else if(b>a)
        cout<<"Brazil";
    else{
        while(1){
            scanf("%s %s",ar,br);
            for(int i=0;i<5;i++){
                if(ar[i]=='1') ca++;
                if(br[i]=='1') cb++;
            }
            if(ca==cb){
                ca=0;
                cb=0;
                continue;
            }
            if(ca>cb){
                cout<<"Argentina";
                break;
            }
            else{
                cout<<"Brazil";
                break;
            }

        }
    }
    return 0;
}
