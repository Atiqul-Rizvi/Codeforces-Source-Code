#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    while(cin>>n>>m){
        int b,g,i,j,k,l,o,p,q,r,s,t;
        int boy[n];
        for(i=0;i<n;i++){
            boy[i]=0;
        }
        cin>>b;
        for(i=0;i<b;i++){
            cin>>p;
            boy[p]=1;
        }
        int girl[m];
        for(i=0;i<m;i++){
            girl[i]=0;
        }
        cin>>g;
        for(i=0;i<g;i++){
            cin>>q;
            girl[q]=1;
        }
        for(i=0;;i++){
            if(i>=(100*(m+n)) && (i%n)==(i%m)){
                break;
            }
            else if(boy[i%n]==1){
                girl[i%m]=1;
            }
            else if(girl[i%m]==1){
                boy[i%n]=1;
            }
        }
        s=0;
        for(i=0;i<n;i++){
            if(boy[i]==0){
                s=1;
            }
        }
        for(i=0;i<m;i++){
            if(girl[i]==0){
                s=1;
            }
        }
        if(s==0){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}
