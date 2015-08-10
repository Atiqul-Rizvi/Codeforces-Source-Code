#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n){
        int a[n];
        int i,j,k,l;
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        for(i=n-1;i>0;i--){
            for(j=i-1;j>=0;j--){
                if(a[j]>a[i]){
                    k=a[i];
                    a[i]+=a[j]-a[i];
                    a[j]-=a[j]-k;
                }
            }
        }
        for(i=0;i<n;i++){
            cout<<a[i]<<' ';
        }
        cout<<endl;
    }
    return 0;
}
