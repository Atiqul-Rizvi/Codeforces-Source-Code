#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    while(cin>>n>>m){
        int i,j,k,l;
        i=(n+1)/2;
        j=((i+m-1)/m)*m;
        if(j>n){
            cout<<"-1"<<endl;
        }
        else{
            cout<<j<<endl;
        }
    }
    return 0;
}
