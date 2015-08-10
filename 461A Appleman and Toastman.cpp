#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    while(cin>>n){
        long long a[n];
        long long i,j,k,l=0;
        for(i=0;i<n;i++){
            cin>>a[i];
            l+=a[i];
        }
        sort(a,a+n);
        for(i=0;i<n-1;i++){
            l+=a[i]*(i+1);
        }
        l+=(n-1)*a[n-1];
        cout<<l<<endl;
    }
    return 0;
}
