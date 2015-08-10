#include<bits/stdc++.h>
using namespace std;
int a[1000000];
int c[1000000];
void sieve(int n)
{
    int i,j;
    int s=sqrt(n);
    for(i=0;i<=n;i++){
        a[i]=0;
    }
    for(i=4;i<=n;i+=2){
        a[i]=1;
    }
    for(i=3;i<=s;i+=2){
        if(a[i]==0){
            for(j=i*i;j<=n;j+=2*i){
                a[j]=1;
            }
        }
    }
}
int main()
{
    sieve(1000000);
    int m,n,o,p,q;
    for(m=0,n=0;m<=1000000;m++){
        if(a[m]!=0){
            c[n]=m;
            n++;
        }
    }
    while(cin>>q){
        for(m=0;m<n;m++){
            p=q-c[m];
            if(a[p]==1){
                cout<<c[m]<<" "<<p<<endl;
                break;
            }
        }
    }
    return 0;
}
