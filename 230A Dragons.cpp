#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,n;
    while(cin>>s>>n){
        int a[n],b[n];
        int i,j,k,l;
        for(i=0;i<n;i++){
            cin>>a[i]>>b[i];
        }
        for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                if(a[i]>a[j]){
                    k=a[i];
                    a[i]=a[j];
                    a[j]=k;
                    k=b[i];
                    b[i]=b[j];
                    b[j]=k;
                }
            }
        }
        l=0;
        for(i=0;i<n;i++){
            if(s>a[i]){
                s+=b[i];
            }
            else{
                l=1;
                break;
            }
        }
        if(l==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
