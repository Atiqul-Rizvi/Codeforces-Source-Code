#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    while(cin>>n>>m){
        int a[m];
        int i,j,k,l;
        for(i=0;i<m;i++){
            cin>>a[i];
        }
        sort(a,a+m);
        k=a[n-1]-a[0];
        for(i=1;i<=m-n;i++){
            if(a[i+n-1]-a[i]<k){
                k=a[i+n-1]-a[i];
            }
        }
        cout<<k<<endl;
    }
    return 0;
}
