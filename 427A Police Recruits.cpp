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
        k=l=0;
        for(i=0;i<n;i++){
            if(a[i]!=-1){
                l+=a[i];
            }
            else{
                if(l!=0){
                    l--;
                }
                else{
                    k++;
                }
            }
        }
        cout<<k<<endl;
    }
    return 0;
}
