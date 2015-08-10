#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    while(cin>>n){
        long long a[n],b[n];
        long long i,j,k,l=0,l1,m=10000000000,m1;
        j=k=1;
        for(i=0;i<n;i++){
            cin>>a[i];
            if(a[i]<=m){
                m1=m;
                m=a[i];
                if(m1!=m){
                    j=1;
                }
                else{
                    j++;
                }
            }
            if(a[i]>=l){
                l1=l;
                l=a[i];
                if(l1!=l){
                    k=1;
                }
                else{
                    k++;
                }
            }
        }
        if(l==m){
            cout<<l-m<<' '<<(n*(n-1)/2)<<endl;
        }
        else{
            cout<<l-m<<' '<<j*k<<endl;
        }
    }
    return 0;
}
