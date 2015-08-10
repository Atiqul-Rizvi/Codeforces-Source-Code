#include<bits/stdc++.h>
using namespace std;
int a[1001];
void s(int n)
{
    int i,j,k;
    k=sqrt(n);
    for(i=4;i<=n;i+=2){
        a[i]=1;
    }
    for(i=3;i<=k;i+=2){
        if(a[i]==0){
            for(j=i*i;j<=n;j+=2*i){
                a[j]=1;
            }
        }
    }
}
int main()
{
    s(1000);
    int i,j,k,l,m,n,x,y;
    int b[1000];
    for(i=2,j=0;i<=1000;i++){
        if(a[i]==0){
            b[j]=i;
            j++;
        }
    }
    while(cin>>n>>k){
        y=0;
        for(i=0;i<j;i++){
            x=b[i]+b[i+1]+1;
            for(m=0;m<j;m++){
                if(x==b[m]){
                    if(x<=n){
                        y++;
                    }
                }
            }
        }
        if(y>=k){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
