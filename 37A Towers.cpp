#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n){
        int a[n];
        int i,j,k,l,m;
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        j=0;
        k=l=1;
        for(i=0;i<n;i++){
            if(a[i]==a[i+1]){
                k++;
                continue;
            }
            else{
                j++;
                if(k>l){
                    l=k;
                }
                k=1;
            }
        }
        cout<<l<<' '<<j<<endl;
    }
    return 0;
}
