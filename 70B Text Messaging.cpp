#include<iostream>
#include<cstring>
#include<algorithm>
#include<cctype>
#include<cstdlib>
#include<stdio.h>
using namespace std;
int main()
{
    string s;
    int i,j,k,l,m,n,o,p;
    while(cin>>n){
        getchar();
        getline(cin,s);
        l=s.length();
        k=m=o=0;
        j=1;
        for(i=0;i<l;i++){
            m++;
            o++;
            if(o>n){
                if(m==o){
                    k=1;
                    break;
                }
                else{
                    m--;
                    o=m;
                    j++;
                }
            }
            if((s[i]=='.')||(s[i]=='?')||(s[i]=='!')){
                m=0;
            }
        }
        if(k==1){
            cout<<"Impossible"<<endl;
        }
        else{
            cout<<j<<endl;
        }
    }
    return 0;
}
