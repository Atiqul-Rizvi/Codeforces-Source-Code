#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n){
        int a[n][2];
        int i,j,k,l,m;
        for(i=0;i<n;i++){
            for(j=0;j<2;j++){
                cin>>a[i][j];
            }
        }
        l=0;
        for(i=0;i<n-1;i++){
            for(j=i+1;j<n;j++){
                if(a[i][0]==a[j][1]){
                    l++;
                }
                if(a[j][0]==a[i][1]){
                    l++;
                }
            }
        }
        cout<<l<<endl;
    }
    return 0;
}
