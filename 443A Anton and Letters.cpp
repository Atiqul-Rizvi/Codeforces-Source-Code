#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while(getline(cin,s)){
        int a[26]={0};
        int i,j,k,l;
        l=s.length();
        for(i=0;i<l;i++){
            k=s[i]-97;
            if(k>=0 && k<26){
                a[k]++;

            }
        }
        j=0;
        for(i=0;i<26;i++){
            if(a[i]!=0){
                j++;
            }
        }
        cout<<j<<endl;
    }
    return 0;
}
