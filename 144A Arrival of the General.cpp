#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    while(cin>>n){
        int a[n],a1[n];
        int i,j,k,l,mx,mn,c=0;
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        mx=*std::max_element(a,a+n);
        for(i=0;i<n;i++){
            if(a[i]==mx){
                k=i;
                break;
            }
        }
        a[k]=0;
        c+=k;
        j=1;
        k=0;
        for(i=0;i<n;i++){
            if(a[i]!=0){
                a1[j]=a[i];
                j++;
            }
        }
        a1[0]=mx;
        mn=*std::min_element(a1,a1+n);
        for(i=n-1;i>=0;i--){
            if(a1[i]==mn){
                l=i;
                break;
            }
        }
        c+=((n-1)-l);
        cout<<c<<endl;
    }
    return 0;
}
