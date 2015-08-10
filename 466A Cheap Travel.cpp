#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a,b;
    while(cin>>n>>m>>a>>b){
        int i,j,k,l;
        int c[3];
        c[0]=n*a;
        j=n/m;
        l=j;
        if(n%m!=0){
            l++;
        }
        k=n%m;
        c[1]=(j*b)+(k*a);
        c[2]=l*b;
        sort(c,c+3);
        cout<<c[0]<<endl;
    }
    return 0;
}
