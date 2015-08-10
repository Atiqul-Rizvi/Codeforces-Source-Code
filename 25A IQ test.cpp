#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n){
        int a[n];
        int i,j,k,l;
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        j=k=0;
        for(i=0;i<n;i++){
            if(a[i]%2==0){
                j++;
            }
            else{
                k++;
            }
        }
        if(j==1){
            for(i=0;i<n;i++){
                if(a[i]%2==0){
                    cout<<i+1<<endl;
                    break;
                }
            }
        }
        else if(k==1){
            for(i=0;i<n;i++){
                if(a[i]%2!=0){
                    cout<<i+1<<endl;
                    break;
                }
            }
        }
    }
    return 0;
}
