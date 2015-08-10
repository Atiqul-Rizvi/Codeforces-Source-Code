#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n){
        int a[n][2];
        int i,j,k,l;
        for(i=0;i<n;i++){
            for(j=0;j<2;j++){
                cin>>a[i][j];
            }
        }
        k=l=1;
        for(i=0;i<n-1;i++){
            if((a[i][0]==a[i+1][0])&&(a[i][1]==a[i+1][1])){
                k++;
            }
            else{
                if(k>l){
                    l=k;
                }
                k=1;
            }
        }
        if(k>l){
            l=k;
        }
        cout<<l<<endl;
    }
    return 0;
}
