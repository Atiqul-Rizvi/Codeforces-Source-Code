#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while(cin>>s){
        int i,j,k,l,m,n,o;
        cin>>k;
        l=s.length();
        string s1[k],s2[k],s3;
        m=l/k;
        if(l%k!=0){
            cout<<"NO"<<endl;
            continue;
        }
        n=i=0;
        o=1;
        while(n<k){
            for( ;i<m*o;i++){
                s1[n]+=s[i];
            }
            n++;
            o++;
        }
        for(i=0;i<k;i++){
            s3=s1[i];
            reverse(s3.begin(),s3.end());
            s2[i]=s3;
        }
        int f=0;
        for(i=0;i<k;i++){
            if(s1[i]!=s2[i]){
                f=1;
                break;
            }
        }
        if(f==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
