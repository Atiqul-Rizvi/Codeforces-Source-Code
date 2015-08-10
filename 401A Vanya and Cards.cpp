#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    while(cin>>n>>x){
        int a[n];
        int i,j,k,l,m=0;
        for(i=0;i<n;i++){
            cin>>a[i];
            m+=a[i];
        }
        m=abs(m);
        if(m%x==0){
            j=m/x;
        }
        else{
            j=m/x+1;
        }
        cout<<j<<endl;
    }
    return 0;
}
