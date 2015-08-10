#include<bits/stdc++.h>
using namespace std;
int gcd(int x, int y)
{
    int m,n,o,p=1;
    if(x>y){
        m=y;
    }
    else{
        m=x;
    }
    for(n=2;n<=m;n++){
        if(((x%n)==0)&&((y%n)==0)){
            p=n;
        }
    }
    return p;
}
int main()
{
    int a,b,n,i,j,k,l;
    while(cin>>a>>b>>n){
        k=l=0;
        while(1){
            i=gcd(a,n);
            n-=i;
            if(n==0){
                k=1;
                break;
            }
            j=gcd(b,n);
            n-=j;
            if(n==0){
                l=1;
                break;
            }
        }
        if(k==1){
            cout<<"0"<<endl;
        }
        else{
            cout<<"1"<<endl;
        }
    }
    return 0;
}
