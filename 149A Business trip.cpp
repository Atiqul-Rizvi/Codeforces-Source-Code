#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    while(cin>>k){
        int a[12];
        int i,j,l,m;
        for(i=0;i<12;i++){
            cin>>a[i];
        }
        sort(a,a+12);
        reverse(a,a+12);
        if(k==0){
            cout<<'0'<<endl;
        }
        else{
            l=m=j=0;
            for(i=0;i<12;i++){
                j+=a[i];
                m++;
                if(j>=k){
                    l=1;
                    break;
                }
            }
            if(l==1){
                cout<<m<<endl;
            }
            else{
                cout<<"-1"<<endl;
            }
        }
    }
    return 0;
}
