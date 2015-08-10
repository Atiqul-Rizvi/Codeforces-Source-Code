#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n){
        int a[n];
        int i,j,k,l=0;
        for(i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==1){
                l=1;
            }
        }
        if(l==1){
            cout<<"-1"<<endl;
        }
        else{
            cout<<'1'<<endl;
        }
    }
    return 0;
}
