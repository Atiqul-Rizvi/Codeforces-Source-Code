#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k;
    while(cin>>n>>k){
        long long int i,j,l;
        i=n/2;
        if(n%2!=0){
            i++;
        }
        if(k <= i){
            cout<<k+(k-1)<<endl;
        }
        else{
            k-=i;
            cout<<k*2<<endl;
        }
    }
    return 0;
}
