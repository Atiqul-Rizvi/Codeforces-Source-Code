#include<bits/stdc++.h>
using namespace std;
int l[1000];
void lucky(int n)
{
    int i,j,k,p,m=0;
    for(i=4;i<=n;i++){
        k=0;
        string s;
        ostringstream c;
        c<<i;
        s=c.str();
        p=s.length();
        for(j=0;j<p;j++){
            if((s[j]!='4')&&(s[j]!='7')){
                k=1;
                break;
            }
        }
        if(k==0){
            l[m]=i;
            m++;
        }
    }
}
int main()
{
    lucky(1000);
    int n,i,j,k;
    while(cin>>n){
        k=0;
        for(i=0;i<14;i++){
            if(n%l[i]==0){
                cout<<"YES"<<endl;
                k=0;
                break;
            }
            else{
                k=1;
            }
        }
        if(k==1){
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
