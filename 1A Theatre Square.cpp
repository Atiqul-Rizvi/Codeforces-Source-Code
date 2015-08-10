#include<iostream>
using namespace std;
int main()
{
    long long n,m,a,r,c;
    while(cin>>n>>m>>a){
        if(n%a==0){
            r=n/a;
        }
        else{
            r=n/a;
            r++;
        }
        if(m%a==0){
            c=m/a;
        }
        else{
            c=m/a;
            c++;
        }
        cout<<r*c<<endl;
    }
    return 0;
}
