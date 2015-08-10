#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n){
        int i,j,k,l,m,p;
        string s,s2;
        cin>>s;
        cin>>s2;
        p=0;
        for(i=0;i<n;i++){
            m=l=0;
            j=s[i]-48;
            k=s2[i]-48;
            while(j!=k){
                j++;
                l++;
                if(j==10){
                    j=0;
                }
            }
            j=s[i]-48;
            k=s2[i]-48;
            while(j!=k){
                j--;
                m++;
                if(j==-1){
                    j=9;
                }
            }
            if(l<m){
                p+=l;
            }
            else{
                p+=m;
            }
        }
        cout<<p<<endl;
    }
    return 0;
}
