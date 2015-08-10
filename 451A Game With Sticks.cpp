#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    while(cin>>n>>m){
        int i,j,k,l=0;
        while(n!=0 && m!=0){
            n-=1;
            m-=1;
            l++;
        }
        if(l%2==0){
            cout<<"Malvika"<<endl;
        }
        else{
            cout<<"Akshat"<<endl;
        }
    }
    return 0;
}
