#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n){
        int a[n],b[n];
        int i,j,k,l;
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        for(i=1;i<=n;i++){
            k=a[i-1];
            b[k-1]=i;
        }
        for(i=0;i<n;i++){
            cout<<b[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
