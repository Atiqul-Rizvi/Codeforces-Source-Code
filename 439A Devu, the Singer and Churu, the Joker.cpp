#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,d;
    while(cin>>n>>d){
        int a[n];
        int i,j,k,l,m;
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        m=d-a[n-1];
        j=0;
        for(i=0;i<n-1;i++){
            m-=a[i];
            m-=10;
            j+=2;
        }
        k=0;
        l=j;
        for(i=0;i<n;i++){
            k+=a[i];
        }
        j+=(m/5);
        k+=j*5;
        if(k>d){
            cout<<"-1"<<endl;
        }
        else{
            l+=m/5;
            cout<<l<<endl;
        }
    }
    return 0;
}
