#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[6];
    int i,j,k,l,m,n;
    for(i=0;i<6;i++){
        cin>>a[i];
    }
    sort(a,a+6);
    l=0;
    for(i=0;i<3;i++){
        if(a[i]==a[i+1] && a[i]==a[i+2] && a[i]==a[i+3]){
            l=0;
            a[i]=a[i+1]=a[i+2]=a[i+3]=0;
            break;
        }
        else{
            l=1;
        }
    }
    if(l==1){
        cout<<"Alien"<<endl;
    }
    else{
        sort(a,a+6);
        if(a[4]==a[5]){
            cout<<"Elephant"<<endl;
        }
        else{
            cout<<"Bear"<<endl;
        }
    }
    return 0;
}
