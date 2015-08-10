#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while(cin>>s){
        int i,j,k,l;
        string s2;
        l=s.length();
        for(i=0;i<l;i++){
            if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B'){
                s[i]='#';
                s[i+1]='#';
                s[i+2]='#';
                i+=2;
            }
        }
        j=k=0;
        for(i=0;i<l;i++){
            if(s[i]=='#' && j==1 && k==0){
                s2+=' ';
                i+=2;
                k=1;
            }
            if(s[i]!='#'){
                s2+=s[i];
                j=1;
                k=0;
            }
        }
        cout<<s2<<endl;
    }
    return 0;
}
