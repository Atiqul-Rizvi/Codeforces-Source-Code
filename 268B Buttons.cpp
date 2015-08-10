#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n){
        int i,j,k,l;
        i=j=0;
        while(n>0){
            i+=n+(n-1)*j;
            n--;
            j++;
        }
        cout<<i<<endl;
    }
    return 0;
}
