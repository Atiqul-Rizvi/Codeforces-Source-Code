#include<bits/stdc++.h>
using namespace std;
int main()
{
    long n;
    while(cin>>n){
        string s,s1;
        int i,j,k,l=1;
        for(i=0;i<n;i++){
            cin>>s;
            if(i==0){
                s1=s;
                continue;
            }
            else{
                if(s!=s1){
                    l++;
                }
            }
            s1=s;
        }
        cout<<l<<endl;
    }
    return 0;
}
