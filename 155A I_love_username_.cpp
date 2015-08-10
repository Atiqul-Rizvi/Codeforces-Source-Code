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
        l=m=a[0];
        k=0;
        for(i=1;i<n;i++){
            for(j=0;j<i;j++){
                if(a[i]>a[j]){
                    if(a[i]>m){
                        m=a[i];
                        k++;
                    }
                }
                if(a[i]<a[j]){
                    if(a[i]<l){
                        l=a[i];
                        k++;
                    }
                }
            }
        }
        cout<<k<<endl;
    }
    return 0;
}
