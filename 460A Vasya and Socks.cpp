#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    while(cin>>n>>m){
        int i,j,k,l;
        l=n;
        while(n>=m){
            i=n/m;
            j=n%m;
            l+=i;
            n=i+j;
        }
        cout<<l<<endl;
    }
    return 0;
}
