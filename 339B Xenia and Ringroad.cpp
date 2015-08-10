#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m;
    while(cin>>n>>m){
        long long int a[m];
        long long int i,j,k,l;
        for(i=0;i<m;i++){
            cin>>a[i];
        }
        l=0;
        k=a[0];
        for(i=1;i<m;i++){
            if(k>a[i]){
                l++;
            }
            k=a[i];
        }
        cout<<((n*l)+k-1)<<endl;
    }
    return 0;
}
