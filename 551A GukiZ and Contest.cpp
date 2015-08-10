#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n){
        int a[n][2],b[n];
        int i,j,k,l,m=1;
        for(i=0;i<n;i++){
            cin>>a[i][0];
            b[i]=a[i][0];
            a[i][1]=m;
            m++;
        }
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                if(a[i][0]>a[j][0]){
                    l=a[i][0];
                    a[i][0]=a[j][0];
                    a[j][0]=l;
                }
            }
        }
        for(i=0;i<n;i++){
            while(a[i][0]==a[i+1][0]){
                a[i+1][1]=a[i][1];
                i++;
            }
        }
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                if(b[i]==a[j][0]){
                    if(i==n-1){
                        cout<<a[j][1];
                        break;
                    }
                    else{
                        cout<<a[j][1]<<' ';
                        break;
                    }
                }
            }
        }
        cout<<endl;
    }
    return 0;
}
