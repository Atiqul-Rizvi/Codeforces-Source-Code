#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b;
    while(cin>>a>>b){
        long long i=0,j,k,l;
        while(a%b!=0){
            i+=a/b;
            j=a;
            a=b;
            b=j%b;
        }
        i+=a/b;
        cout<<i<<endl;
    }
    return 0;
}
