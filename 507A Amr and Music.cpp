#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    while(cin>>n>>k){
        int a[n],b[n],c[n];
        int i,j=0,l,m,o=0;
        for(i=0;i<n;i++){
            cin>>a[i];
            b[j]=a[i];
            j++;
        }
        sort(a,a+n);
        if(a[0]>k){
            cout<<'0'<<endl;
        }
        else{
            m=l=0;
            for(i=0;i<n;i++){
                l+=a[i];
                m++;
                if(l>=k){
                    if(l==k){
                        break;
                    }
                    else{
                        l-=a[i];
                        m--;
                        break;
                    }
                }
            }
            for(i=0;i<m;i++){
                for(j=0;j<n;j++){
                    if(a[i]==b[j]){
                        c[o]=j+1;
                        b[j]=0;
                        o++;
                    }
                }
            }
            sort(c,c+o);
            cout<<m<<endl;
            for(i=0;i<m;i++){
                cout<<c[i]<<' ';
            }
            cout<<endl;
        }
    }
    return 0;
}
