#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int i,j,k,l;
    while(cin>>s){
        string s1;
        l=s.length();
        for(i=0;i<l;i++){
            if((s[i]-'0')>(9-(s[i]-'0'))){
                if(s[i]=='9' && i==0){
                    s1+=(s[i]-'0')+'0';
                }
                else{
                    s1+=(9-(s[i]-'0'))+'0';
                }
            }
            else{
                s1+=(s[i]-'0')+'0';
            }
        }
        cout<<s1<<endl;
    }
    return 0;
}
