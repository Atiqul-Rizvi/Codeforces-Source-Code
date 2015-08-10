#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,d;
    while(cin>>k>>l>>m>>n>>d){
        int a[d+1];
        memset(a,0,sizeof(a));
        for(i=k;i<=d;i+=k){
            a[i]=1;
        }
        for(i=l;i<=d;i+=l){
            a[i]=1;
        }
        for(i=m;i<=d;i+=m){
            a[i]=1;
        }
        for(i=n;i<=d;i+=n){
            a[i]=1;
        }
        j=0;
        for(i=1;i<=d;i++){
            if(a[i]==1){
                j++;
            }
        }
        cout<<j<<endl;
    }
    return 0;
}
