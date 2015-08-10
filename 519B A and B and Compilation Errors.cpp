#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n){
        long long a,b,c,k,l,m;
        int i,j;
        k=l=m=0;
        for(i=0;i<n;i++){
            cin>>a;
            k+=a;
        }
        for(i=0;i<n-1;i++){
            cin>>b;
            l+=b;
        }
        for(i=0;i<n-2;i++){
            cin>>c;
            m+=c;
        }
        cout<<k-l<<endl<<l-m<<endl;
    }
    return 0;
}
