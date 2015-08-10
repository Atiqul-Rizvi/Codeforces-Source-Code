#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n){
        char a[n][n];
        int i=0,j=0,k;
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                a[i][j]=' ';
            }
        }
        for(j=0;j<n;j++){
            a[n/2][j]='D';
        }
        for(i=0;i<n;i++){
            a[i][n/2]='D';
        }
        k=1;
        for(i=(n/2)-1;i>0;i--){
            for(j=n-1-k;j>=k;j--){
                a[i][j]='D';
            }
            k++;
        }
        k=1;
        for(i=(n/2)+1;i<n-1;i++){
            for(j=n-1-k;j>=k;j--){
                a[i][j]='D';
            }
            k++;
        }
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                if(a[i][j]!='D'){
                    a[i][j]='*';
                }
            }
        }
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                cout<<a[i][j];
            }
            cout<<endl;
        }
    }
    return 0;
}
