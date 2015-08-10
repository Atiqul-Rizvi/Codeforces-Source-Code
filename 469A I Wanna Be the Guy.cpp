#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p,q;
    while(cin>>n){
        cin>>p;
        int a[p];
        int c[100]={0};
        int i,j,k,l,m;
        for(i=0;i<p;i++){
            cin>>a[i];
            c[a[i]-1]++;
        }
        cin>>q;
        int b[q];
        for(i=0;i<q;i++){
            cin>>b[i];
            c[b[i]-1]++;
        }
        l=0;
        for(i=0;i<n;i++){
            if(c[i]==0){
                l=1;
                break;
            }
        }
        if(l==0){
            cout<<"I become the guy."<<endl;
        }
        else{
            cout<<"Oh, my keyboard!"<<endl;
        }
    }
    return 0;
}
