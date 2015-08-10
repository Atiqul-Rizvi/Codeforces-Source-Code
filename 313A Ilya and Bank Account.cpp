#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while(cin>>s){
        int i,j,k,n,m;
        string s2,s3;
        n=s.length();
        for(i=0;i<n-1;i++){
            s2+=s[i];
        }
        for(i=0;i<n;i++){
            if(i!=(n-2)){
                s3+=s[i];
            }
        }
        stringstream(s2)>>j;
        stringstream(s3)>>k;
        stringstream(s)>>m;
        if(j>m && j>=k){
            cout<<j<<endl;
        }
        else if(k>m && k>=j){
            cout<<k<<endl;
        }
        else{
            cout<<m<<endl;
        }
    }
    return 0;
}
