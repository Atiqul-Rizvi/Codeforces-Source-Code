#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a1,a2,a3;
    while(cin>>a1>>a2>>a3){
        int b1,b2,b3,n,i,j,k,l;
        cin>>b1>>b2>>b3;
        cin>>n;
        i=a1+a2+a3;
        j=b1+b2+b3;
        k=0;
        k+=i/5;
        if(i%5!=0){
            k++;
        }
        k+=j/10;
        if(j%10!=0){
            k++;
        }
        if(k<=n){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
