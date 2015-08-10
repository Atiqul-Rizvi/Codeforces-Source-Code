#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    while(cin>>a>>b>>c){
        int d[6];
        d[0]=a+b+c;
        d[1]=a*b*c;
        d[2]=a+b*c;
        d[3]=a*b+c;
        d[4]=a*(b+c);
        d[5]=(a+b)*c;
        sort(d,d+6);
        cout<<d[5]<<endl;
    }
    return 0;
}
