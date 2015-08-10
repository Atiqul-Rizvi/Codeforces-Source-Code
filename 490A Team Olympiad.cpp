#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n){
        int a[n];
        int i,j,k,l1=0,l2=0,l3=0,m,w;
        for(i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==1){
                l1++;
            }
            if(a[i]==2){
                l2++;
            }
            if(a[i]==3){
                l3++;
            }
        }
        if(l1==0 || l2==0 || l3==0){
            cout<<'0'<<endl;
        }
        else{
            w=min(l1,min(l2,l3));
            cout<<w<<endl;
            i=j=k=0;
            for(m=0;m<w;m++){
                while(a[i]!=1){
                    i++;
                }
                i++;
                cout<<i<<' ';
                while(a[j]!=2){
                    j++;
                }
                j++;
                cout<<j<<' ';
                while(a[k]!=3){
                    k++;
                }
                k++;
                cout<<k<<endl;
            }
        }
    }
    return 0;
}
