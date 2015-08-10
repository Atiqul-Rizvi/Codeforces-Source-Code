#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    while(cin>>n>>m){
        int i,j,k,l;
        cout<<(n+m-1)<<endl;
        for(i=1;i<=m;i++){
            cout<<"1 "<<i<<endl;
        }
        for(i=2;i<=n;i++){
            cout<<i<<" 1"<<endl;
        }
    }
    return 0;
}
