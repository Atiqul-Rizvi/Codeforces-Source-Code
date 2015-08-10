#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n){
        int i,j,k,l,m;
        int a[n][2];
        for(i=0;i<n;i++){
            for(j=0;j<2;j++){
                cin>>a[i][j];
            }
        }
        l=0;
        for(i=0;i<n;i++){
            if((a[i][1]-a[i][0])>=2){
                l++;
            }
        }
        cout<<l<<endl;
    }
    return 0;
}
