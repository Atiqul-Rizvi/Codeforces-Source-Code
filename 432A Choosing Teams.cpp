#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    while(cin>>n>>k){
        int a[n];
        int i,j,l=0;
        for(i=0;i<n;i++){
            cin>>a[i];
            if(a[i]+k<=5){
                l++;
            }
        }
        if(l<3){
            cout<<'0'<<endl;
        }
        else{
            cout<<l/3<<endl;
        }
    }
    return 0;
}
