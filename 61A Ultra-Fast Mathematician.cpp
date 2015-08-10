#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while(cin>>s){
        string s1,s2;
        cin>>s1;
        int i,j,k,l;
        l=s.length();
        for(i=0;i<l;i++){
            if(s[i]!=s1[i]){
                s2+='1';
            }
            else{
                s2+='0';
            }
        }
        cout<<s2<<endl;
    }
    return 0;
}
