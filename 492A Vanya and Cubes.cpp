#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n){
        int i,j=0,k=1,l=0;
        while(l<=n){
            for(i=1;i<=k;i++){
                l+=i;
            }
            k++;
            if(l<=n){
                j++;
            }
        }
        cout<<j<<endl;
    }
    return 0;
}
