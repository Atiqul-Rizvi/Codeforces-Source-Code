#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    while(cin>>t){
        int a;
        while(t--){
            cin>>a;
            int n,a1;
            n=360/(180-a);
            a1=(n-2)*180/n;
            if(a1==a){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}
