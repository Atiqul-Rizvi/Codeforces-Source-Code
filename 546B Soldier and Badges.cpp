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
        }
        int a1[10000];
        for(i=0;i<10000;i++){
            a1[i]=1;
        }
        for(i=0;i<n;i++){
            if(a1[a[i]]==1){
                a1[a[i]]=0;
            }
            else{
                while(a1[a[i]]!=1){
                    a[i]++;
                    l++;
                }
                a1[a[i]]=0;
            }
        }
        cout<<l<<endl;
    }
    return 0;
}
