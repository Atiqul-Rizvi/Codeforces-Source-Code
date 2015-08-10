#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    while(cin>>a>>b){
        int c=0,d,e,f;
        c=a;
        while(a>=b){
            d=a/b;
            e=a%b;
            c+=d;
            a=d+e;
        }
        cout<<c<<endl;
    }
    return 0;
}
